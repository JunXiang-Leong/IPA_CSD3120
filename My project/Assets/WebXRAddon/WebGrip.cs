using Zinnia.Action;
using WebXR;

public class WebGrip :BooleanAction
{
	public WebXRController controller;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
		Receive(controller.GetButton(WebXRController.ButtonTypes.Grip));
    }
}
