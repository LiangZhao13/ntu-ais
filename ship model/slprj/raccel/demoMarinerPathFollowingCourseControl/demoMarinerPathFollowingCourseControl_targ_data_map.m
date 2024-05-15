    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
            paramMap.sections(nTotSects) = dumSection; %prealloc
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%
            section.nData     = 34;
            section.data(34)  = dumData; %prealloc

                    ;% rtP.LOSobserver_K_f
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtP.Courseautopilot_K_nomoto
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtP.Courseautopilot_Kp
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtP.DiscertetimeEKFforSOGandCOG_Qd
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtP.DiscertetimeEKFforSOGandCOG_Rd
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 7;

                    ;% rtP.Courseautopilot_Td
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 11;

                    ;% rtP.Courseautopilot_Ti
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% rtP.DiscertetimeEKFforSOGandCOG_alpha_1
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 13;

                    ;% rtP.DiscertetimeEKFforSOGandCOG_alpha_2
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 14;

                    ;% rtP.DiscertetimeEKFforSOGandCOG_h_samp
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 15;

                    ;% rtP._A
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 16;

                    ;% rtP._C
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 17;

                    ;% rtP.Integral_A
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 18;

                    ;% rtP.Integral_C
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 19;

                    ;% rtP.Differentiator_A
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 20;

                    ;% rtP.Differentiator_C
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 21;

                    ;% rtP.Differentiator_D
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 22;

                    ;% rtP.Saturation1_UpperSat
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 23;

                    ;% rtP.Saturation1_LowerSat
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 24;

                    ;% rtP.Gain_Gain
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 25;

                    ;% rtP.FromWorkspace_Time0
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 26;

                    ;% rtP.FromWorkspace_Data0
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 27;

                    ;% rtP.FromWorkspace1_Time0
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 76;

                    ;% rtP.FromWorkspace1_Data0
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 77;

                    ;% rtP.Constant_Value
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 126;

                    ;% rtP.Constant1_Value
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 127;

                    ;% rtP.Delta_Value
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 128;

                    ;% rtP.kappa_Value
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 129;

                    ;% rtP.R_switch_Value
                    section.data(29).logicalSrcIdx = 28;
                    section.data(29).dtTransOffset = 130;

                    ;% rtP.h_Value
                    section.data(30).logicalSrcIdx = 29;
                    section.data(30).dtTransOffset = 131;

                    ;% rtP.Constant_Value_pwerxxgmrl
                    section.data(31).logicalSrcIdx = 30;
                    section.data(31).dtTransOffset = 132;

                    ;% rtP.Constant1_Value_gv1s2zl30d
                    section.data(32).logicalSrcIdx = 31;
                    section.data(32).dtTransOffset = 133;

                    ;% rtP.U0_Value
                    section.data(33).logicalSrcIdx = 32;
                    section.data(33).dtTransOffset = 134;

                    ;% rtP.x0_Value
                    section.data(34).logicalSrcIdx = 33;
                    section.data(34).dtTransOffset = 135;

            nTotData = nTotData + section.nData;
            paramMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 1;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 16;
            section.data(16)  = dumData; %prealloc

                    ;% rtB.d25mgzrntl
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.biizpmf3bn
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 7;

                    ;% rtB.n5pvzdd33j
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 8;

                    ;% rtB.h2tvvxrgwg
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 9;

                    ;% rtB.an2daryais
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 10;

                    ;% rtB.ngqggygexp
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 11;

                    ;% rtB.o4uvmnpinp
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 12;

                    ;% rtB.gvtucr52ij
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 13;

                    ;% rtB.lk0bm5xw5m
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 14;

                    ;% rtB.hleb2ewssu
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 63;

                    ;% rtB.ncqyk10zdm
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 112;

                    ;% rtB.fjukfd0ml0
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 113;

                    ;% rtB.otagkty1sc
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 120;

                    ;% rtB.ocn4o1graj
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 127;

                    ;% rtB.irc5tjl1ah
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 128;

                    ;% rtB.a2jle11lq2
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 129;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 5;
        sectIdxOffset = 1;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.oc0omgil0h
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.hqcskiqd0y
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.jiervi4iek
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.owksmtgtzo
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.m0kis4oha4
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.bfaw3qxqxr
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 9;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtDW.ghkckquryd.AQHandles
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.nyi2nvjifs.AQHandles
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.kbalrgazis.AQHandles
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.fwltfpz541.AQHandles
                    section.data(4).logicalSrcIdx = 9;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.bkdowjb332.AQHandles
                    section.data(5).logicalSrcIdx = 10;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.oi100ramc1.AQHandles
                    section.data(6).logicalSrcIdx = 11;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.ntyl23hlog.AQHandles
                    section.data(7).logicalSrcIdx = 12;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.np4zebvttt.AQHandles
                    section.data(8).logicalSrcIdx = 13;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.m33o44zqms.AQHandles
                    section.data(9).logicalSrcIdx = 14;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.eyihkpy5jo.AQHandles
                    section.data(10).logicalSrcIdx = 15;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.mbenr5dnw0.AQHandles
                    section.data(11).logicalSrcIdx = 16;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.bqrvh1egsn.AQHandles
                    section.data(12).logicalSrcIdx = 17;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.h2ncbkx1nd.AQHandles
                    section.data(13).logicalSrcIdx = 18;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.i2q4rrymn5.AQHandles
                    section.data(14).logicalSrcIdx = 19;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.kpgpl1x3nf.AQHandles
                    section.data(15).logicalSrcIdx = 20;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.mj5bh5o2fl.TimePtr
                    section.data(16).logicalSrcIdx = 21;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.kj33gbqgqh.TimePtr
                    section.data(17).logicalSrcIdx = 22;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.gkr5vx1zx5
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.dkc5vqz4gx
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.fjimdccq4p
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.h5x2psv2rm
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.adphgackqq.PrevIndex
                    section.data(2).logicalSrcIdx = 27;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.npo3ez1xrm.PrevIndex
                    section.data(3).logicalSrcIdx = 28;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 9;
            section.data(9)  = dumData; %prealloc

                    ;% rtDW.adi32v00qw
                    section.data(1).logicalSrcIdx = 29;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.gayjctc4dn
                    section.data(2).logicalSrcIdx = 30;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.mhvkskjfs0
                    section.data(3).logicalSrcIdx = 31;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.cuv3mcnkfb
                    section.data(4).logicalSrcIdx = 32;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.kyv0fyn5jf
                    section.data(5).logicalSrcIdx = 33;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.mubxw11mvk
                    section.data(6).logicalSrcIdx = 34;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.mlz0dzd5h3
                    section.data(7).logicalSrcIdx = 35;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.mljze4pwl0
                    section.data(8).logicalSrcIdx = 36;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.iw1j5thqrr
                    section.data(9).logicalSrcIdx = 37;
                    section.data(9).dtTransOffset = 8;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 2900496539;
    targMap.checksum1 = 270298566;
    targMap.checksum2 = 2306768164;
    targMap.checksum3 = 2532363302;

