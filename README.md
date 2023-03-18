# README

# Done By:

Name : Leong Jun Xiang 

SITID: 2000857

You can play the project at : 

---

# IPA CSD3120

This project is built for IPA for CSD3120.

### About Project:

The project is about a sandbox-like area where user is able to interact with the darts and throw it at the targets positioned infront of the player.

### About Architecture:

---

since this project uses unity the architecture will mostly comprise of unity’s Architecture.

> The Unity engine is built with native C/C++ internally, however it has a C# wrapper that you use to interact with it. As such, you need to be familiar with some of the key concepts of scripting in C#. This section of the User Manual contains information on how Unity implements .NET and C#, and any exceptions you might encounter as you code.
> 

[https://docs.unity3d.com/Manual/unity-architecture.html](https://docs.unity3d.com/Manual/unity-architecture.html)

As for the other 2 packages (VRTK , Unity-WebXR-Export) not much infomation has been given.

### Build Requirements:

---

The project comprises of a few key items.

Credits to : [De-Panther](https://github.com/De-Panther), [ExtendRealityLtd](https://github.com/ExtendRealityLtd), [CubicBrain](https://www.youtube.com/@CubicBrain)

- Unity-WebXR-Export - [https://github.com/De-Panther/unity-webxr-export](https://github.com/De-Panther/unity-webxr-export)
- VRTK - [https://github.com/ExtendRealityLtd/VRTK](https://github.com/ExtendRealityLtd/VRTK)
- Setup Guide by CubicBrain :
    
    [https://youtu.be/behdvI-G_oQ](https://youtu.be/behdvI-G_oQ)
    
    ### Building the project :
    
    - Requires : Unity 2021.3.20f1 (other versions may cause bugs)
    - A page to host the product after build.
    - you can find the scene under My project\Assets\Samples\WebXR Interactions\0.16.3-preview\Sample Scene\Scenes
    - open the scene and you can test it in unity
    - remember to make sure that the scene is included in the build list before building else nothing will happen.
    
    ---
    
    ### Step 1 :
    
    you can either follow the video guide (recomended)
    
    [https://youtu.be/vwA_xa8XJy8](https://youtu.be/vwA_xa8XJy8)
    
    or follow the following steps :
    
    - Step 1:
        
        Get WebGL in unity.
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled.png)
        
    - Step 2:
        
        Click project settings → player → Resolution and presentation
        
        Match the WebGL template.
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%201.png)
        
    - Step 3:
        
        under project settings → player → publishing settings
        
        set compression format to disabled
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%202.png)
        
        press build n deploy.
        
    
    ### Step 2:
    
    Host the whole project on a site.
    
    after building your project you should have 3 files which you will need to host.
    
    ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%203.png)
    
    For this I recomend github-pages as its easy to use.
    
    - Step 1
        
        Find the settings tab
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%204.png)
        
    - Step 2
        
        Make sure your project is public or you pay for a private git repo
        
        and git your files (this how the repo should look like when u enter)
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%205.png)
        
    - Step 3
        
        Click on pages
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%206.png)
        
    - Step 4
        
        Choose your branch and deploy
        
        ![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%207.png)
        
        Done.
        

### How to play:

---

The player will be scored based on how many targets they hit and points are given based on the target’s size. (big = 5 , mid = 10, small = 20)

![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%208.png)

- You can hit the targets using the darts provided on the table infront of the player.
- If you are unable to test with a handset in VR you can use your mouse cursor to hold and pick up the dart.
    - Releasing the dart while holding space will throw the dart forward.

![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%209.png)

- Upon hitting the target the target will spawn some particles and a hit sound to indicate that you hit the target, and proceeds to spawn at a new location.
- You can move around in the scene by holding down the left thumbstick and it will show a teleporter gizmo to the location you will be teleported to after you release your thumbstick.

---

### Restarting the game :

---

Upon starting the game you will hear a start sound.

Once the game ended the timer on the table will show 0

![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%2010.png)

You can restart the game by pressing the red button below

![Untitled](README%208a721b49747148b684caa4e52df92528/Untitled%2011.png)

---
