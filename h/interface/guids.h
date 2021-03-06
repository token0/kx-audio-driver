// kX SDK:
// kX Audio Driver GUIDS
// Copyright (c) Eugene Gavrilov, 2001-2005.
// All rights reserved

/*
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program; if not, write to the Free Software
 *   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA
 */

// -----
// do not include this file directly, use 'kxapi.h' instead

#ifndef KX_GUIDS_H_
#define KX_GUIDS_H_

#ifndef _KS_
 #include <ks.h>
#endif

// mixer device names

DEFINE_GUIDSTRUCT("1CCF2388-ACDF-44d7-ADC7-BEACCFAC0A13", TOPO_MASTER_MIXER_NAME);
#define TOPO_MASTER_MIXER_NAME DEFINE_GUIDNAMED(TOPO_MASTER_MIXER_NAME)

DEFINE_GUIDSTRUCT("5DE34F5F-203F-4c2f-9183-24C4E83D2C07", TOPO_SYNTH1_NAME);
#define TOPO_SYNTH1_NAME DEFINE_GUIDNAMED(TOPO_SYNTH1_NAME)

DEFINE_GUIDSTRUCT("4F675923-5339-44a9-8663-0229D070820D", TOPO_SYNTH2_NAME);
#define TOPO_SYNTH2_NAME DEFINE_GUIDNAMED(TOPO_SYNTH2_NAME)

DEFINE_GUIDSTRUCT("A53B59C3-6F9D-464c-AFD6-2827C37BC85D", TOPO_RECIN_NAME);
#define TOPO_RECIN_NAME DEFINE_GUIDNAMED(TOPO_RECIN_NAME)

DEFINE_GUIDSTRUCT("DB2E2B46-BAD6-4434-B595-4940469E1C8D", TOPO_WAVEOUT01_NAME);	/**/
#define TOPO_WAVEOUT01_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT01_NAME)

DEFINE_GUIDSTRUCT("8731FE99-F22D-41f4-8731-B7429AF4C7D5", TOPO_WAVEOUT23_NAME); /**/
#define TOPO_WAVEOUT23_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT23_NAME)

DEFINE_GUIDSTRUCT("B00B8440-42A4-49f9-BD05-1B07A1418F6A", TOPO_WAVEOUT45_NAME); /**/
#define TOPO_WAVEOUT45_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT45_NAME)

DEFINE_GUIDSTRUCT("7BA22A9B-F39D-41dc-B07A-B33435EB85A0", TOPO_WAVEOUT67_NAME); /**/
#define TOPO_WAVEOUT67_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT67_NAME)

DEFINE_GUIDSTRUCT("21498b8a-0d88-41df-af60-546adab4c857", TOPO_WAVEOUTHQ_NAME); /**/
#define TOPO_WAVEOUTHQ_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUTHQ_NAME)

DEFINE_GUIDSTRUCT("7694D02C-82D3-4686-A410-FFE472E746E1", TOPO_WAVEINHQ_NAME); /**/
#define TOPO_WAVEINHQ_NAME DEFINE_GUIDNAMED(TOPO_WAVEINHQ_NAME)

// {FB6E34F3-A6E6-4292-B8B0-239CB57A7084}
DEFINE_GUIDSTRUCT("FB6E34F3-A6E6-4292-B8B0-239CB57A7084", TOPO_WAVEIN_NAME);
#define TOPO_WAVEIN_NAME DEFINE_GUIDNAMED(TOPO_WAVEIN_NAME)

// {B61A8F62-C6A6-4f08-82EC-761B0BE0E95A}
DEFINE_GUIDSTRUCT("B61A8F62-C6A6-4f08-82EC-761B0BE0E95A", TOPO_WAVEOUT01_VOLUME_NAME);
#define TOPO_WAVEOUT01_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT01_VOLUME_NAME)
// {A8C232A3-D9D4-4ee7-80FE-1B3474D3842D}
DEFINE_GUIDSTRUCT("A8C232A3-D9D4-4ee7-80FE-1B3474D3842D", TOPO_WAVEOUT23_VOLUME_NAME);
#define TOPO_WAVEOUT23_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT23_VOLUME_NAME)
// {48553D65-6D69-4b1c-8FE7-5E1B27AC2F0B}
DEFINE_GUIDSTRUCT("48553D65-6D69-4b1c-8FE7-5E1B27AC2F0B", TOPO_WAVEOUT45_VOLUME_NAME);
#define TOPO_WAVEOUT45_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT45_VOLUME_NAME)
// {6FE27FFB-4962-4205-86B0-9E009596FB09}
DEFINE_GUIDSTRUCT("6FE27FFB-4962-4205-86B0-9E009596FB09", TOPO_WAVEOUT67_VOLUME_NAME);
#define TOPO_WAVEOUT67_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT67_VOLUME_NAME)
// {c61ff61b-7cf4-48ba-b761-7385b2b71931}
DEFINE_GUIDSTRUCT("c61ff61b-7cf4-48ba-b761-7385b2b71931", TOPO_WAVEOUTHQ_VOLUME_NAME);
#define TOPO_WAVEOUTHQ_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUTHQ_VOLUME_NAME)

// {940F06AD-FE39-4ac7-918A-54FC82B719AB}
DEFINE_GUIDSTRUCT("940F06AD-FE39-4ac7-918A-54FC82B719AB", TOPO_WAVEOUT01_MUTE_NAME);
#define TOPO_WAVEOUT01_MUTE_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT01_MUTE_NAME)
// {2E64C86F-03DD-4eca-B043-C8A9E5C3EC25}
DEFINE_GUIDSTRUCT("2E64C86F-03DD-4eca-B043-C8A9E5C3EC25", TOPO_WAVEOUT23_MUTE_NAME);
#define TOPO_WAVEOUT23_MUTE_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT23_MUTE_NAME)
// {AC966F3B-D379-4796-B4FA-F305650E8FED}
DEFINE_GUIDSTRUCT("AC966F3B-D379-4796-B4FA-F305650E8FED", TOPO_WAVEOUT45_MUTE_NAME);
#define TOPO_WAVEOUT45_MUTE_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT45_MUTE_NAME)
// {0F7B6182-9069-468b-B8F6-9FE7C38C1737}
DEFINE_GUIDSTRUCT("0F7B6182-9069-468b-B8F6-9FE7C38C1737", TOPO_WAVEOUT67_MUTE_NAME);
#define TOPO_WAVEOUT67_MUTE_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUT67_MUTE_NAME)
// {577a1d96-e8ab-4f1a-8bd0-bdb3ecf2c155}
DEFINE_GUIDSTRUCT("577a1d96-e8ab-4f1a-8bd0-bdb3ecf2c155", TOPO_WAVEOUTHQ_MUTE_NAME);
#define TOPO_WAVEOUTHQ_MUTE_NAME DEFINE_GUIDNAMED(TOPO_WAVEOUTHQ_MUTE_NAME)

// {F7EC0944-0D07-409a-89D2-82EDC2745CD0}
DEFINE_GUIDSTRUCT("F7EC0944-0D07-409a-89D2-82EDC2745CD0", TOPO_SYNTH1_VOLUME_NAME);
#define TOPO_SYNTH1_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_SYNTH1_VOLUME_NAME)
// {37EAC9A0-DBA9-43d5-896D-56E51B38A2A3}
DEFINE_GUIDSTRUCT("37EAC9A0-DBA9-43d5-896D-56E51B38A2A3", TOPO_SYNTH1_MUTE_NAME);
#define TOPO_SYNTH1_MUTE_NAME DEFINE_GUIDNAMED(TOPO_SYNTH1_MUTE_NAME)

// {4F06273E-E7E3-4628-9980-BEB59C64FC3C}
DEFINE_GUIDSTRUCT("4F06273E-E7E3-4628-9980-BEB59C64FC3C", TOPO_SYNTH2_VOLUME_NAME);
#define TOPO_SYNTH2_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_SYNTH2_VOLUME_NAME)
// {A5569A8C-5DFA-4847-8E1F-2B16634E9187}
DEFINE_GUIDSTRUCT("A5569A8C-5DFA-4847-8E1F-2B16634E9187", TOPO_SYNTH2_MUTE_NAME);
#define TOPO_SYNTH2_MUTE_NAME DEFINE_GUIDNAMED(TOPO_SYNTH2_MUTE_NAME)

// {D843FB71-4583-45b3-8AE1-94B0C8E18B71}
DEFINE_GUIDSTRUCT("D843FB71-4583-45b3-8AE1-94B0C8E18B71", TOPO_MASTER_VOLUME_NAME);
#define TOPO_MASTER_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_MASTER_VOLUME_NAME)

// {2D859B5C-95CC-43e8-A182-490331785AE8}
DEFINE_GUIDSTRUCT("2D859B5C-95CC-43e8-A182-490331785AE8", TOPO_MASTER_MUTE_NAME);
#define TOPO_MASTER_MUTE_NAME DEFINE_GUIDNAMED(TOPO_MASTER_MUTE_NAME)

// {308B8581-7FA0-4705-B0B1-0ECEC943B4E4}
DEFINE_GUIDSTRUCT("308B8581-7FA0-4705-B0B1-0ECEC943B4E4", TOPO_RECIN_VOLUME_NAME);
#define TOPO_RECIN_VOLUME_NAME DEFINE_GUIDNAMED(TOPO_RECIN_VOLUME_NAME)

// {11F6CBB4-CE68-451f-BCAE-03460896C39B}
DEFINE_GUIDSTRUCT("11F6CBB4-CE68-451f-BCAE-03460896C39B", TOPO_RECIN_MUTE_NAME);
#define TOPO_RECIN_MUTE_NAME DEFINE_GUIDNAMED(TOPO_RECIN_MUTE_NAME)

// {EEFB700A-A28B-4f5b-B96B-DFE13A94EF4B}
DEFINE_GUIDSTRUCT("EEFB700A-A28B-4f5b-B96B-DFE13A94EF4B", KX_UARTIN_NAME);
#define KX_UARTIN_NAME DEFINE_GUIDNAMED(KX_UARTIN_NAME)

// {715361EB-AF5C-41db-A123-CD3D7826C824}
DEFINE_GUIDSTRUCT("715361EB-AF5C-41db-A123-CD3D7826C824", KX_UARTOUT_NAME);
#define KX_UARTOUT_NAME DEFINE_GUIDNAMED(KX_UARTOUT_NAME)

// {60D0D0D5-10D5-4400-8353-2FF0081AFF79}
DEFINE_GUIDSTRUCT("60D0D0D5-10D5-4400-8353-2FF0081AFF79", KX_UARTIN2_NAME);
#define KX_UARTIN2_NAME DEFINE_GUIDNAMED(KX_UARTIN2_NAME)

// {CA0C33B9-E1B2-4bfa-AC51-944774577AF5}
DEFINE_GUIDSTRUCT("CA0C33B9-E1B2-4bfa-AC51-944774577AF5", KX_UARTOUT2_NAME);
#define KX_UARTOUT2_NAME DEFINE_GUIDNAMED(KX_UARTOUT2_NAME)

// {B78E66B5-2721-4616-B8D4-4E0155BA3A1C}
DEFINE_GUIDSTRUCT("B78E66B5-2721-4616-B8D4-4E0155BA3A1C", KX_CTRLIN_NAME);
#define KX_CTRLIN_NAME DEFINE_GUIDNAMED(KX_CTRLIN_NAME)

// {0AE4BB4D-A590-4b67-B527-6565A4B53DBD}
DEFINE_GUIDSTRUCT("0AE4BB4D-A590-4b67-B527-6565A4B53DBD", KX_CTRLOUT_NAME);
#define KX_CTRLOUT_NAME DEFINE_GUIDNAMED(KX_CTRLOUT_NAME)


// {FDCAC90A-249C-4e0d-B829-A5FF8F123780}
DEFINE_GUIDSTRUCT("FDCAC90A-249C-4e0d-B829-A5FF8F123780", WAVE_AC3_NODE_NAME);
#define WAVE_AC3_NODE_NAME DEFINE_GUIDNAMED(WAVE_AC3_NODE_NAME)

// {8F492AA1-7CD4-43ea-A975-78CF4192FC4E}
DEFINE_GUIDSTRUCT("8F492AA1-7CD4-43ea-A975-78CF4192FC4E", KX_LINEIN_NAME);
#define KX_LINEIN_NAME DEFINE_GUIDNAMED(KX_LINEIN_NAME)

// {322FE1A3-DC32-4d4e-8F27-EA15EF8669EA}
DEFINE_GUIDSTRUCT("322FE1A3-DC32-4d4e-8F27-EA15EF8669EA", KX_MICIN_NAME);
#define KX_MICIN_NAME DEFINE_GUIDNAMED(KX_MICIN_NAME)

// {FE9305CA-8735-4804-A6A0-571457BC4B59}
DEFINE_GUIDSTRUCT("FE9305CA-8735-4804-A6A0-571457BC4B59", KX_LINEIN_MUTE_NAME);
#define KX_LINEIN_MUTE_NAME DEFINE_GUIDNAMED(KX_LINEIN_MUTE_NAME)

// {06F13537-ECBB-4e20-9938-C7964F880FA4}
DEFINE_GUIDSTRUCT("06F13537-ECBB-4e20-9938-C7964F880FA4", KX_MICIN_MUTE_NAME);
#define KX_MICIN_MUTE_NAME DEFINE_GUIDNAMED(KX_MICIN_MUTE_NAME)

// ------------------------------------------------------------------------------

DEFINE_GUIDSTRUCT("243A0AAA-984D-44a0-9CE8-834E6A74EF6E", MY_KX_RECMIXER_NAME);
#define MY_KX_RECMIXER_NAME DEFINE_GUIDNAMED(MY_KX_RECMIXER_NAME)

// {68A80F46-9FDD-4831-8E9C-3E9A3BF12E12}
DEFINE_GUIDSTRUCT("68A80F46-9FDD-4831-8E9C-3E9A3BF12E12", MY_KX_WAVE_OUTPUT);
#define MY_KX_WAVE_OUTPUT DEFINE_GUIDNAMED(MY_KX_WAVE_OUTPUT)

// ---- mixer control elements names

// {3FD31A02-CAAE-4ed8-89C2-FF5CB392233D}
DEFINE_GUIDSTRUCT("3FD31A02-CAAE-4ed8-89C2-FF5CB392233D", MY_KX_WAVE_VOLUME);
#define MY_KX_WAVE_VOLUME DEFINE_GUIDNAMED(MY_KX_WAVE_VOLUME)

// {B3B7F1E2-E7E8-4caa-B2CD-C4E2904F824B}
DEFINE_GUIDSTRUCT("B3B7F1E2-E7E8-4caa-B2CD-C4E2904F824B", MY_KX_WAVE_MUTE);
#define MY_KX_WAVE_MUTE DEFINE_GUIDNAMED(MY_KX_WAVE_MUTE)

DEFINE_GUID(KSGUID_AUDIO,
 0x6994AD04L, 0x93EF, 0x11D0, 0xA3, 0xCC, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96);

// --------

// {AFAE1C86-549E-44fc-A34B-BAC7ABB645B5}
DEFINE_GUID(IID_IAdapterCommon, 
0xafae1c86, 0x549e, 0x44fc, 0xa3, 0x4b, 0xba, 0xc7, 0xab, 0xb6, 0x45, 0xb5);

// Private KX Property ID
// {A54E8FE1-8735-47c9-B9F3-FA5981304313}
#define STATIC_KSPROPSETID_Private 0xa54e8fe1, 0x8735, 0x47c9, 0xb9, 0xf3, 0xfa, 0x59, 0x81, 0x30, 0x43, 0x13
DEFINE_GUIDSTRUCT("A54E8FE1-8735-47c9-B9F3-FA5981304313", KSPROPSETID_Private);
#define KSPROPSETID_Private DEFINE_GUIDNAMED(KSPROPSETID_Private)

#define KSPROPERTY_PRIVATE	70

// EAX 1.0 / 2.0
// EAX (listener) reverb property set {4a4e6fc1-c341-11d1-b73a-444553540000}
DEFINE_GUID(DSPROPSETID_EAX10_ReverbProperties,
    0x4a4e6fc1,
    0xc341,
    0x11d1,
    0xb7, 0x3a, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
// EAX buffer reverb property set {4a4e6fc0-c341-11d1-b73a-444553540000}
DEFINE_GUID(DSPROPSETID_EAX10BUFFER_ReverbProperties, 
    0x4a4e6fc0,
    0xc341,
    0x11d1,
    0xb7, 0x3a, 0x44, 0x45, 0x53, 0x54, 0x00, 0x00);
/*
* EAX 2.0 listener property set {0306A6A8-B224-11d2-99E5-0000E8D8C722}
*/
DEFINE_GUID(DSPROPSETID_EAX20_ListenerProperties, 
    0x306a6a8, 
    0xb224, 
    0x11d2, 
    0x99, 0xe5, 0x0, 0x0, 0xe8, 0xd8, 0xc7, 0x22);
/*
* EAX 2.0 buffer property set {0306A6A7-B224-11d2-99E5-0000E8D8C722}
*/
DEFINE_GUID(DSPROPSETID_EAX20_BufferProperties, 
    0x306a6a7, 
    0xb224, 
    0x11d2, 
    0x99, 0xe5, 0x0, 0x0, 0xe8, 0xd8, 0xc7, 0x22);

/*
 * EAX 3.0 listener property set {A8FA6880-B476-11d3-BDB9-00C0F02DDF87}
 */
DEFINE_GUID(DSPROPSETID_EAX30_ListenerProperties, 
	0xa8fa6882, 
	0xb476, 
	0x11d3, 
	0xbd, 0xb9, 0x00, 0xc0, 0xf0, 0x2d, 0xdf, 0x87);


/*
* EAX 3.0 buffer property set {A8FA6881-B476-11d3-BDB9-00C0F02DDF87}
*/
DEFINE_GUID(DSPROPSETID_EAX30_BufferProperties, 
	0xa8fa6881, 
	0xb476, 
	0x11d3, 
	0xbd, 0xb9, 0x0, 0xc0, 0xf0, 0x2d, 0xdf, 0x87);

// I3DL2 listener property set {DA0F0520-300A-11D3-8A2B-0060970DB011}
DEFINE_GUID(DSPROPSETID_I3DL2_ListenerProperties,
0xDA0F0520,
0x300A,
0x11D3,
0x8A, 0x2B,
0x00, 0x60, 0x97, 0x0D, 0xB0, 0x11);

// I3DL2 buffer property set {DA0F0521-300A-11D3-8A2B-0060970DB011}
DEFINE_GUID(DSPROPSETID_I3DL2_BufferProperties,
0xDA0F0521,
0x300A,
0x11D3,
0x8A, 0x2B,
0x00, 0x60, 0x97, 0x0D, 0xB0, 0x11);

#ifndef STATIC_KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF
  #define STATIC_KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF \
  DEFINE_WAVEFORMATEX_GUID(WAVE_FORMAT_DOLBY_AC3_SPDIF)

  DEFINE_GUIDSTRUCT(    "00000092-0000-0010-8000-00aa00389b71",
    KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF);

  #define KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF \
  DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_DOLBY_AC3_SPDIF)
#endif

#ifndef STATIC_KSDATAFORMAT_SUBTYPE_WMASPDIF
  #define STATIC_KSDATAFORMAT_SUBTYPE_WMASPDIF \
  DEFINE_WAVEFORMATEX_GUID(WAVE_FORMAT_WMASPDIF)

  DEFINE_GUIDSTRUCT(    "00000164-0000-0010-8000-00aa00389b71",
    KSDATAFORMAT_SUBTYPE_WMASPDIF);

  #define KSDATAFORMAT_SUBTYPE_WMASPDIF \
  DEFINE_GUIDNAMED(KSDATAFORMAT_SUBTYPE_WMASPDIF)
#endif

#if (NTDDI_VERSION < NTDDI_VISTA)
    // {29CC9AB1-E89D-413c-B6B2-F6D50005D063}
    DEFINE_GUID(IID_IPinName, 
    0x29cc9ab1, 0xe89d, 0x413c, 0xb6, 0xb2, 0xf6, 0xd5, 0x0, 0x5, 0xd0, 0x63);
#endif

#endif
