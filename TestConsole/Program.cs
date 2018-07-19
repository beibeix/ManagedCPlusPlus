using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using NSCameraWrapper;
using NSImageWrapper;
using ImageAndCamera;

namespace TestConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            ImageWrapper img = new ImageWrapper();
            CameraWrapper c = new CameraWrapper();
            c.GetImage(img);
            XXXImageWrapper img1 = new XXXImageWrapper();
            XXXCameraWrapper cw = new XXXCameraWrapper();
            cw.XXXGetImage(img1);
             


        }
    }
}
