/*
* //******************************************************************
* //
* // Copyright 2016 Samsung Electronics All Rights Reserved.
* //
* //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
* //
* // Licensed under the Apache License, Version 2.0 (the "License");
* // you may not use this file except in compliance with the License.
* // You may obtain a copy of the License at
* //
* //      http://www.apache.org/licenses/LICENSE-2.0
* //
* // Unless required by applicable law or agreed to in writing, software
* // distributed under the License is distributed on an "AS IS" BASIS,
* // WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* // See the License for the specific language governing permissions and
* // limitations under the License.
* //
* //-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
*/

#include "JniOcStack.h"
#include "JniOnDPDevicesFoundListener.h"
#include "OCDirectPairing.h"
#include <mutex>

#ifndef _Included_org_iotivity_base_OcDirectPairDevice
#define _Included_org_iotivity_base_OcDirectPairDevice

using namespace OC;

class JniOcDirectPairDevice
{
    public:
        JniOcDirectPairDevice(std::shared_ptr<OCDirectPairing> directPairingDevice);
        ~JniOcDirectPairDevice();

        static JniOcDirectPairDevice* getJniOcDirectPairDevicePtr(JNIEnv *env, jobject thiz);
        static jintArray JconvertIntVectorToJavaList(JNIEnv *env, std::vector<OCPrm_t> &vector);

        std::shared_ptr<OCDirectPairing> getPtr();
        std::string getHost();
        std::vector<OCPrm_t> getPairingMethods();
        OCConnectivityType connectivityType();

    private:
          std::shared_ptr<OCDirectPairing> m_sharedDirectPairDevice;
};

/* DO NOT EDIT THIS FILE BEYOND THIS LINE - it is machine generated */

#ifdef __cplusplus
extern "C" {
#endif
    /*
     * Class:     org_iotivity_base_OcDirectPairDevice
     * Method:    getDirectPairedDevices
     * Signature: (Lorg/iotivity/base/OcDirectPairDevice/GetDirectPairedListener;)V
     */
    JNIEXPORT void JNICALL Java_org_iotivity_base_OcDirectPairDevice_getDirectPairedDevices
        (JNIEnv *, jobject, jobject);

   /*
    * Class:     org_iotivity_base_OcDirectPairDevice
    * Method:    getHost
    * Signature: ()Ljava/lang/String;
    */
    JNIEXPORT jstring JNICALL Java_org_iotivity_base_OcDirectPairDevice_getHost
        (JNIEnv *, jobject);

    /*
     * Class:     org_iotivity_base_OcDirectPairDevice
     * Method:    getPairingMethods
     * Signature: ()Ljava/util/List;
     */
    JNIEXPORT jintArray JNICALL Java_org_iotivity_base_OcDirectPairDevice_getPairingMethods
        (JNIEnv *, jobject);

    /*
     * Class:     org_iotivity_base_OcDirectPairDevice
     * Method:    doDirectPairing
     * Signature: (Lorg/iotivity/base/OcDirectPairDevice;Lorg/iotivity/base/OcPrmType;
     *           Ljava/lang/String;Lorg/iotivity/base/OcDirectPairDevice/DirectPairingListener;)V
     */
    JNIEXPORT void JNICALL Java_org_iotivity_base_OcDirectPairDevice_doDirectPairing
        (JNIEnv *, jobject, jobject, jint, jstring, jobject);

    /*
    * Class:     org_iotivity_base_OcDirectPairDevice
    * Method:    getConnectivityTypeN
    * Signature: ()I
    */
    JNIEXPORT jint JNICALL Java_org_iotivity_base_OcDirectPairDevice_getConnectivityTypeN
        (JNIEnv *env, jobject thiz);

#ifdef __cplusplus
}
#endif
#endif

