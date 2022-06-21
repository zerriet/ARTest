using UnityEngine;
using Fusion;
using System.Collections.Generic;
using Fusion.Sockets;
using UnityEngine.SceneManagement;
using System.Collections;
using System;

public class HeadlessController:MonoBehaviour, INetworkRunnerCallbacks
{
  private NetworkRunner runner;

  void Awake() {
    Application.targetFrameRate = 30;
  }

  async void Start() {

    // Quit if not in Headless mode

    runner = gameObject.AddComponent<NetworkRunner>();
    //runner.ProvideInput = true;


    Debug.Log($"Starting Server");

    // Create a new Fusion Runner

    // Basic Setup
    runner.name = $"DedicatedServer";
    runner.AddCallbacks(this); // register callbacks

    // Start the Server
    var result = await runner.StartGame(new StartGameArgs() {
      GameMode = GameMode.Server, // for dedicated servers,
      SessionName = "TestRoom",
      Scene = SceneManager.GetActiveScene().buildIndex,
      SceneManager = gameObject.AddComponent<NetworkSceneManagerDefault>()
    });

    // Check if all went fine
    if (result.Ok) {
      Debug.Log($"Runner Start DONE");
    } else {
      // Quit the application if startup fails

      Debug.LogError($"Error while starting Server: {result.ShutdownReason}");

      // it can be used any error code that can be read by an external application
      // using 0 means all went fine
      Application.Quit(1);
    }
  }

  // Fusion INetworkRunnerCallbacks implementation

  public void OnShutdown(NetworkRunner runner, ShutdownReason shutdownReason) {
    Debug.LogWarning($"{nameof(OnShutdown)}: {nameof(shutdownReason)}: {shutdownReason}");
    Debug.Log("Something went wrong arghhhh");
    // Quit normally
    Application.Quit(0);
  }

  [SerializeField] private NetworkPrefabRef _playerPrefab;
    private Dictionary<PlayerRef, NetworkObject> _spawnedCharacters = new Dictionary<PlayerRef, NetworkObject>();

    public void OnPlayerJoined(NetworkRunner runner, PlayerRef player)
    {
        // Create a unique position for the player
        Vector3 spawnPosition = new Vector3((player.RawEncoded%runner.Config.Simulation.DefaultPlayers)*0.2f,- 0.1f,0);
        NetworkObject networkPlayerObject = runner.Spawn(_playerPrefab, spawnPosition, Quaternion.identity, player);

        print(player);
        print("Spawned Player");
        // Keep track of the player avatars so we can remove it when they disconnect
        _spawnedCharacters.Add(player, networkPlayerObject);
    }

    public void OnPlayerLeft(NetworkRunner runner, PlayerRef player)
    {
        // Find and remove the players avatar
        if (_spawnedCharacters.TryGetValue(player, out NetworkObject networkObject))
        {
            runner.Despawn(networkObject);
            _spawnedCharacters.Remove(player);
        }
    }

    public void OnInput(NetworkRunner runner, NetworkInput input)
    {
        var data = new NetworkInputData();

        if (Input.GetKey(KeyCode.W))
            data.direction += Vector3.forward;

        if (Input.GetKey(KeyCode.S))
            data.direction += Vector3.back;

        if (Input.GetKey(KeyCode.A))
            data.direction += Vector3.left;

        if (Input.GetKey(KeyCode.D))
            data.direction += Vector3.right;

        input.Set(data);
    }


  public void OnConnectRequest(NetworkRunner runner, NetworkRunnerCallbackArgs.ConnectRequest request, byte[] token) => Debug.LogWarning($"{nameof(OnConnectRequest)}: {nameof(NetworkRunnerCallbackArgs.ConnectRequest)}: {request.RemoteAddress}");
  public void OnSceneLoadDone(NetworkRunner runner) => Debug.LogWarning($"{nameof(OnSceneLoadDone)}: {nameof(runner.CurrentScene)}: {runner.CurrentScene}");
  public void OnSceneLoadStart(NetworkRunner runner) => Debug.LogWarning($"{nameof(OnSceneLoadStart)}: {nameof(runner.CurrentScene)}: {runner.CurrentScene}");
  public void OnInputMissing(NetworkRunner runner, PlayerRef player, NetworkInput input) { }
  public void OnConnectedToServer(NetworkRunner runner) { }
  public void OnDisconnectedFromServer(NetworkRunner runner) { }
  public void OnConnectFailed(NetworkRunner runner, NetAddress remoteAddress, NetConnectFailedReason reason) { }
  public void OnUserSimulationMessage(NetworkRunner runner, SimulationMessagePtr message) { }
  public void OnSessionListUpdated(NetworkRunner runner, List<SessionInfo> sessionList) { }
  public void OnCustomAuthenticationResponse(NetworkRunner runner, Dictionary<string, object> data) { }
  public void OnReliableDataReceived(NetworkRunner runner, PlayerRef player, System.ArraySegment<byte> data) { }
public void OnHostMigration(NetworkRunner runner, HostMigrationToken hostMigrationToken) { }

}
