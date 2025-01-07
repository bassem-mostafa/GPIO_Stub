// #############################################################################
// #### Copyright ##############################################################
// #############################################################################

/*
 * Copyright 2024 BaSSeM
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// #############################################################################
// #### Description ############################################################
// #############################################################################

/**
 *  @file
 *
 *  @brief STUB GPIO
 */

// #############################################################################
// #### Control Include(s) #####################################################
// #############################################################################

#include "Platform.h"

// #############################################################################
// #### Control Macro(s) #######################################################
// #############################################################################

// #############################################################################
// #### File Guard #############################################################
// #############################################################################

/**
 *  @addtogroup Stub_Port_Module
 *
 *  @{
 */

/**
 *  @defgroup Stub_GPIO GPIO
 *
 *  @{
 */

#ifdef GPIO_STUB

    #ifndef GPIO_STUB_PORT_H_
        #define GPIO_STUB_PORT_H_

        #warning "Platform GPIO Stub In Use"

        #ifdef __cplusplus
extern "C"
{
        #endif /* __cplusplus */

        // #############################################################################
        // #### Include(s) #############################################################
        // #############################################################################

        // #############################################################################
        // #### Public Macro(s) ########################################################
        // #############################################################################

        /**
         *  @brief Number of GPIO Instances
         */
        #define GPIO_NUMBER_OF_INSTANCES ( GPIO_199 - GPIO_Null + 1 )

    // #############################################################################
    // #### Public Type(s) #########################################################
    // #############################################################################

    /**
     *  @brief GPIO Type
     *
     *  @enum GPIO_t
     */
    typedef enum GPIO
    {
        GPIO_Null = 0, ///< Null
        GPIO_1,        ///< GPIO 1 (Minimum)
        GPIO_2,
        GPIO_3,
        GPIO_4,
        GPIO_5,
        GPIO_6,
        GPIO_7,
        GPIO_8,
        GPIO_9,
        GPIO_10,
        GPIO_11,
        GPIO_12,
        GPIO_13,
        GPIO_14,
        GPIO_15,
        GPIO_16,
        GPIO_17,
        GPIO_18,
        GPIO_19,
        GPIO_20,
        GPIO_21,
        GPIO_22,
        GPIO_23,
        GPIO_24,
        GPIO_25,
        GPIO_26,
        GPIO_27,
        GPIO_28,
        GPIO_29,
        GPIO_30,
        GPIO_31,
        GPIO_32,
        GPIO_33,
        GPIO_34,
        GPIO_35,
        GPIO_36,
        GPIO_37,
        GPIO_38,
        GPIO_39,
        GPIO_40,
        GPIO_41,
        GPIO_42,
        GPIO_43,
        GPIO_44,
        GPIO_45,
        GPIO_46,
        GPIO_47,
        GPIO_48,
        GPIO_49,
        GPIO_50,
        GPIO_51,
        GPIO_52,
        GPIO_53,
        GPIO_54,
        GPIO_55,
        GPIO_56,
        GPIO_57,
        GPIO_58,
        GPIO_59,
        GPIO_60,
        GPIO_61,
        GPIO_62,
        GPIO_63,
        GPIO_64,
        GPIO_65,
        GPIO_66,
        GPIO_67,
        GPIO_68,
        GPIO_69,
        GPIO_70,
        GPIO_71,
        GPIO_72,
        GPIO_73,
        GPIO_74,
        GPIO_75,
        GPIO_76,
        GPIO_77,
        GPIO_78,
        GPIO_79,
        GPIO_80,
        GPIO_81,
        GPIO_82,
        GPIO_83,
        GPIO_84,
        GPIO_85,
        GPIO_86,
        GPIO_87,
        GPIO_88,
        GPIO_89,
        GPIO_90,
        GPIO_91,
        GPIO_92,
        GPIO_93,
        GPIO_94,
        GPIO_95,
        GPIO_96,
        GPIO_97,
        GPIO_98,
        GPIO_99,
        GPIO_100,
        GPIO_101,
        GPIO_102,
        GPIO_103,
        GPIO_104,
        GPIO_105,
        GPIO_106,
        GPIO_107,
        GPIO_108,
        GPIO_109,
        GPIO_110,
        GPIO_111,
        GPIO_112,
        GPIO_113,
        GPIO_114,
        GPIO_115,
        GPIO_116,
        GPIO_117,
        GPIO_118,
        GPIO_119,
        GPIO_120,
        GPIO_121,
        GPIO_122,
        GPIO_123,
        GPIO_124,
        GPIO_125,
        GPIO_126,
        GPIO_127,
        GPIO_128,
        GPIO_129,
        GPIO_130,
        GPIO_131,
        GPIO_132,
        GPIO_133,
        GPIO_134,
        GPIO_135,
        GPIO_136,
        GPIO_137,
        GPIO_138,
        GPIO_139,
        GPIO_140,
        GPIO_141,
        GPIO_142,
        GPIO_143,
        GPIO_144,
        GPIO_145,
        GPIO_146,
        GPIO_147,
        GPIO_148,
        GPIO_149,
        GPIO_150,
        GPIO_151,
        GPIO_152,
        GPIO_153,
        GPIO_154,
        GPIO_155,
        GPIO_156,
        GPIO_157,
        GPIO_158,
        GPIO_159,
        GPIO_160,
        GPIO_161,
        GPIO_162,
        GPIO_163,
        GPIO_164,
        GPIO_165,
        GPIO_166,
        GPIO_167,
        GPIO_168,
        GPIO_169,
        GPIO_170,
        GPIO_171,
        GPIO_172,
        GPIO_173,
        GPIO_174,
        GPIO_175,
        GPIO_176,
        GPIO_177,
        GPIO_178,
        GPIO_179,
        GPIO_180,
        GPIO_181,
        GPIO_182,
        GPIO_183,
        GPIO_184,
        GPIO_185,
        GPIO_186,
        GPIO_187,
        GPIO_188,
        GPIO_189,
        GPIO_190,
        GPIO_191,
        GPIO_192,
        GPIO_193,
        GPIO_194,
        GPIO_195,
        GPIO_196,
        GPIO_197,
        GPIO_198,
        GPIO_199, ///< GPIO 199 (Maximum)
    } GPIO_t;

        // #############################################################################
        // #### Public Method(s) #######################################################
        // #############################################################################

        // #############################################################################
        // #### Public Variable(s) #####################################################
        // #############################################################################

        // #############################################################################
        // #### File Guard #############################################################
        // #############################################################################

        #ifdef __cplusplus
} /* extern "C" */
        #endif /* __cplusplus */

    #endif /* GPIO_STUB_PORT_H_ */

#endif /* GPIO_STUB */

/**
 *  @}
 *
 *  @}
 */

// #############################################################################
// #### END OF FILE ############################################################
// #############################################################################
