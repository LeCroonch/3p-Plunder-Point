# Plunder Point

## Summary
Plunder Point is a multi-player first-person shooter designed to be ran with Steam. 

# Installation
- Have Steam open and running. Multiplayer component won't work with out it
- Download the .zip file and extract it
- Once you've done that, open the Windows folder
- Open Blaster.exe (ignore MenuSystem.exe if present)
- Once the game has opened, you should see two buttons to either host or join
- One person selects host and will be brought to a basic lobby level
- Other people that want to join the lobby must load the same Blaster.exe and instead hit join once a player is already hosting a lobby.
- Multiplayer component should now be working properly.

# How to Play
- After the rounds start, players can collect one gun at a time and navigate the map.
- Players have three minutes to eliminate other players.

# Known / Fixed Bugs
- When pressing the options button in the main menu, the PlayerController takes over the scene, and allows you to interact as if you are in the scene. Fixed by implementing a C++ class used in the Menu Blueprint to disable everything.
- Host doesnt see the match starting timer on the first match
- Host doesnt see game timer during first match
- Joinee doesnt get to fly around until the 0 second mark of the start of the second game
- if the host leaves the match, then host again the joinee cant join and is just stuck on the main menu
- Cant return to menu when hosting a match that no one has joined yet and your waiting for them to join in the lobby map
- Capsule not matching jumping animation

# Resources Used
- *Stylized Fantasy Provencal ( Stylized , Fantasy , Provencal )* by StylArts - Environments (Unreal Marrketplace)
- *Military Weapons Silver by Adia Entertainment** - Weapons (Unreal Marketplace)
- *Stylized - Clay Forest Village Pack by Studio Kobo* - Environments (Unreal Marketplace)