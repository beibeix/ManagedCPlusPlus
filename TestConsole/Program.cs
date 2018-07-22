using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using NSCameraWrapper;
using NSImageWrapper;
using ImageAndCamera;
//using Wrapper;

using UmanagedCPPException;

namespace TestConsole
{
    class Program
    {
        static void Main(string[] args)
        {
            //ImageWrapper img = new ImageWrapper();
            //CameraWrapper c = new CameraWrapper();
            //c.GetImage(img);
            //XXXImageWrapper img1 = new XXXImageWrapper();
            //XXXCameraWrapper cw = new XXXCameraWrapper();
            //cw.XXXGetImage(img1);


            //CXImageWrapper img = new CXImageWrapper();
            //int k = img.Get();
            //img.Set(12);
            //int kk = img.Get();
            try
            {
                ThrowUnmanagedExceptionWrapper.CallUnManagedException(UmanagedExceptionType.THROWERRORCODE);
            }
            catch (ExceptionWrapper ex)
            {
                Console.WriteLine("[*]ExceptionWrapper:Message-{0}, ErrorCode-{1}", ex.Message, ex.err_code);
            }

            try
            {
                ThrowUnmanagedExceptionWrapper.CallUnManagedException(UmanagedExceptionType.THROWSTDEXCEPTION);
            }
            catch (ExceptionWrapper ex)
            {
                Console.WriteLine("[*]ExceptionWrapper:Message-{0}, ErrorCode-{1}", ex.Message, ex.err_code);
            }

            try
            {
                ThrowUnmanagedExceptionWrapper.CallUnManagedException(UmanagedExceptionType.THROWCUSTOMEXCEPTION);
            }
            catch (ExceptionWrapper ex)
            {
                Console.WriteLine("[*]ExceptionWrapper:Message-{0}, ErrorCode-{1}", ex.Message, ex.err_code);
            }
            Console.Read();
        }
    }
}
