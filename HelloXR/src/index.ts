import { Engine } from "babylonjs";
import { App } from './app'
const canvas = document.getElementById('renderCanvas') as HTMLCanvasElement;
// const ctx = canvas.getContext('2d');
// ctx.font = '50px Arial';
// ctx.fillText('hello XR',50,50);


const engine = new Engine(canvas,true);
const app = new App(engine,canvas);
const scenePromise = app.createXRScene(canvas,null);
// engine.runRenderLoop(() => {
//     scene.render();
// });
scenePromise.then(scene=>{
    engine.runRenderLoop(()=>{
        scene.render();
    });
})