/*****************************************************/
/**  Autogenerated clustergen voice for cmu_us_rms    */
/*****************************************************/

#include "cst_string.h"
#include "cst_cg.h"
#include "cst_cart.h"

extern const cst_cart * const cmu_us_rms_f0_carts[];
extern const cst_cart cmu_us_rms_spamf0_phrase_cart;
extern const cst_cart cmu_us_rms_spamf0_accent_cart;
extern const float * const cmu_us_rms_spamf0_accent_vectors[];
#define cmu_us_rms_spamf0_accent_num_channels 8
#define cmu_us_rms_spamf0_accent_num_frames 94


extern const cst_cart * cmu_us_rms_single_mcep_carts[];
#define cmu_us_rms_single_num_channels 114
#define cmu_us_rms_single_num_frames 10446
extern const unsigned short * cmu_us_rms_single_model_vectors[];
extern const dur_stat * const cmu_us_rms_dur_stats[];
extern const cst_cart cmu_us_rms_dur_cart;
extern const char * const *cmu_us_rms_phone_states[];

const char * const cmu_us_rms_types[] = {
   "zh_204",
   "zh_205",
   "zh_206",
   "oy_131",
   "oy_132",
   "oy_133",
   "ch_41",
   "ch_42",
   "ch_43",
   "aw_21",
   "aw_22",
   "aw_23",
   "ow_126",
   "ow_127",
   "ow_128",
   "b_36",
   "b_37",
   "b_38",
   "g_76",
   "g_77",
   "g_78",
   "ng_121",
   "ng_122",
   "ng_123",
   "uw_179",
   "uw_180",
   "uw_181",
   "sh_156",
   "sh_157",
   "sh_158",
   "uh_174",
   "uh_175",
   "uh_176",
   "hh_81",
   "hh_82",
   "hh_83",
   "ae_6",
   "ae_7",
   "ae_8",
   "y_194",
   "y_195",
   "y_196",
   "k_101",
   "k_102",
   "k_103",
   "aa_1",
   "aa_2",
   "aa_3",
   "ay_31",
   "ay_32",
   "ay_33",
   "w_189",
   "w_190",
   "w_191",
   "m_111",
   "m_112",
   "m_113",
   "pau_143",
   "ao_16",
   "ao_17",
   "ao_18",
   "th_169",
   "th_170",
   "th_171",
   "ah_11",
   "ah_12",
   "ah_13",
   "v_184",
   "v_185",
   "v_186",
   "dh_51",
   "dh_52",
   "dh_53",
   "d_46",
   "d_47",
   "d_48",
   "n_116",
   "n_117",
   "n_118",
   "jh_96",
   "jh_97",
   "jh_98",
   "r_146",
   "r_147",
   "r_148",
   "ey_66",
   "ey_67",
   "ey_68",
   "f_71",
   "f_72",
   "f_73",
   "ih_86",
   "ih_87",
   "ih_88",
   "p_136",
   "p_137",
   "p_138",
   "iy_91",
   "iy_92",
   "iy_93",
   "l_106",
   "l_107",
   "l_108",
   "z_199",
   "z_200",
   "z_201",
   "pau_161",
   "s_151",
   "s_152",
   "s_153",
   "eh_56",
   "eh_57",
   "eh_58",
   "t_164",
   "t_165",
   "t_166",
   "er_61",
   "er_62",
   "er_63",
   "ax_26",
   "ax_27",
   "ax_28",
   "pau_141",
   "pau_142",
   NULL};
#define cmu_us_rms_num_types  124

const float cmu_us_rms_model_min[] = { 
   0.000000,
   0.000000,
   -0.105506,
   0.012137,
   -2.164260,
   0.016141,
   -1.109930,
   0.016597,
   -0.668187,
   0.016632,
   -1.154450,
   0.016767,
   -0.391618,
   0.016338,
   -0.680646,
   0.016580,
   -0.540649,
   0.019889,
   -0.838494,
   0.015534,
   -0.450559,
   0.014618,
   -0.825718,
   0.015498,
   -0.165153,
   0.014296,
   -0.676482,
   0.012907,
   -0.153582,
   0.011963,
   -0.477405,
   0.010785,
   -0.232139,
   0.011038,
   -0.511163,
   0.011640,
   -0.182793,
   0.011750,
   -0.474290,
   0.011354,
   -0.195714,
   0.009076,
   -0.489518,
   0.007013,
   -0.145743,
   0.006306,
   -0.379031,
   0.006294,
   -0.151363,
   0.007349,
   -0.449185,
   0.003270,
   -1.031970,
   0.010390,
   -0.831298,
   0.009987,
   -0.749674,
   0.011160,
   -0.274486,
   0.011229,
   -0.328660,
   0.010794,
   -0.239727,
   0.009898,
   -0.210368,
   0.009261,
   -0.174855,
   0.014307,
   -0.197839,
   0.009180,
   -0.190170,
   0.008188,
   -0.195920,
   0.009055,
   -0.101596,
   0.008492,
   -0.117977,
   0.009425,
   -0.092450,
   0.008305,
   -0.108925,
   0.008453,
   -0.086135,
   0.007633,
   -0.104667,
   0.009120,
   -0.096733,
   0.010745,
   -0.123130,
   0.009425,
   -0.061969,
   0.006805,
   -0.176942,
   0.008564,
   -0.165415,
   0.008969,
   -0.081244,
   0.009719,
   -0.129452,
   0.009777,
   -0.065974,
   0.007844,
   0.316063,
   0.000767,
   0.056998,
   0.020538,
   0.150928,
   0.043600,
   0.138000,
   0.047275,
   0.100521,
   0.042534,
   0.000000,
   0.000000,
};
const float cmu_us_rms_model_range[] = { 
   145.078003,
   46.174999,
   7.623296,
   1.513283,
   5.899380,
   1.243929,
   2.563300,
   0.655548,
   2.617757,
   0.555863,
   2.160680,
   0.542744,
   1.228571,
   0.353412,
   1.109775,
   0.332212,
   1.200280,
   0.316996,
   1.052498,
   0.341111,
   1.018004,
   0.312444,
   1.048242,
   0.324803,
   0.871246,
   0.257496,
   0.787514,
   0.276116,
   0.695962,
   0.229119,
   0.645803,
   0.222612,
   0.683966,
   0.226130,
   0.596995,
   0.241550,
   0.570523,
   0.225851,
   0.699375,
   0.193898,
   0.451328,
   0.188712,
   0.599853,
   0.214278,
   0.451732,
   0.179209,
   0.437614,
   0.196797,
   0.381929,
   0.173785,
   0.581395,
   0.207022,
   2.887570,
   0.738030,
   1.818154,
   0.525456,
   1.138942,
   0.361765,
   0.518299,
   0.212987,
   0.618629,
   0.193726,
   0.432482,
   0.163513,
   0.354674,
   0.142492,
   0.337970,
   0.133049,
   0.342873,
   0.126924,
   0.382684,
   0.126238,
   0.368615,
   0.116310,
   0.206960,
   0.109325,
   0.207397,
   0.145037,
   0.171221,
   0.103410,
   0.218860,
   0.107505,
   0.174697,
   0.090681,
   0.169283,
   0.084481,
   0.194888,
   0.081914,
   0.221262,
   0.082873,
   0.126421,
   0.085715,
   0.242349,
   0.083928,
   0.240328,
   0.080593,
   0.136035,
   0.080269,
   0.181382,
   0.076359,
   0.116322,
   0.080073,
   0.682987,
   0.318683,
   0.918946,
   0.234344,
   0.790400,
   0.210853,
   0.692895,
   0.187394,
   0.760898,
   0.194466,
   10.000000,
   5.050760,
};
float cmu_us_rms_dynwin[] = { -0.5, 0.0, 0.5 };
#define cmu_us_rms_dynwinsize 3
const double cmu_us_rms_me_filter_0[] = {
-0.000399, -0.000699, -0.001099, -0.001637, -0.002312, -0.003074, -0.003809, -0.004351, -0.004484, -0.003962, -0.002541, -0.000000, 0.003823, 0.009004, 0.015512, 0.023196, 0.031787, 0.040907, 0.050093, 0.058835, 0.066610, 0.072934, 0.077398, 0.079708, 0.079708, 0.077398, 0.072934, 0.066610, 0.058835, 0.050093, 0.040907, 0.031787, 0.023196, 0.015512, 0.009004, 0.003823, -0.000000, -0.002541, -0.003962, -0.004484, -0.004351, -0.003809, -0.003074, -0.002312, -0.001637, -0.001099, -0.000699, -0.000399
};
const double cmu_us_rms_me_filter_1[] = {
0.000496, -0.000058, -0.001005, -0.002381, -0.003945, -0.005039, -0.004653, -0.001797, 0.003915, 0.011720, 0.019506, 0.024199, 0.022732, 0.013331, -0.003381, -0.023975, -0.042828, -0.053712, -0.051874, -0.035904, -0.008641, 0.023315, 0.051428, 0.067831, 0.067831, 0.051428, 0.023315, -0.008641, -0.035904, -0.051874, -0.053712, -0.042828, -0.023975, -0.003381, 0.013331, 0.022732, 0.024199, 0.019506, 0.011720, 0.003915, -0.001797, -0.004653, -0.005039, -0.003945, -0.002381, -0.001005, -0.000058, 0.000496
};
const double cmu_us_rms_me_filter_2[] = {
0.000201, 0.001321, 0.000959, -0.002283, -0.004482, -0.001078, 0.003495, 0.001813, -0.000020, 0.008175, 0.013508, -0.004814, -0.029146, -0.020370, 0.009818, 0.010703, -0.006372, 0.025894, 0.083862, 0.038460, -0.122700, -0.193589, -0.023811, 0.210551, 0.210551, -0.023811, -0.193589, -0.122700, 0.038460, 0.083862, 0.025894, -0.006372, 0.010703, 0.009818, -0.020370, -0.029146, -0.004814, 0.013508, 0.008175, -0.000020, 0.001813, 0.003495, -0.001078, -0.004482, -0.002283, 0.000959, 0.001321, 0.000201
};
const double cmu_us_rms_me_filter_3[] = {
0.001506, -0.001866, 0.000040, 0.000245, 0.001315, 0.001553, -0.007738, 0.004472, 0.006691, -0.006614, -0.000051, -0.010459, 0.019514, 0.010167, -0.042837, 0.019609, 0.013218, 0.010271, -0.008695, -0.096298, 0.140882, 0.048727, -0.264734, 0.161309, 0.161309, -0.264734, 0.048727, 0.140882, -0.096298, -0.008695, 0.010271, 0.013218, 0.019609, -0.042837, 0.010167, 0.019514, -0.010459, -0.000051, -0.006614, 0.006691, 0.004472, -0.007738, 0.001553, 0.001315, 0.000245, 0.000040, -0.001866, 0.001506
};
const double cmu_us_rms_me_filter_4[] = {
-0.001754, 0.002357, -0.002671, 0.002435, -0.001539, 0.000393, -0.000077, 0.001963, -0.006807, 0.013808, -0.020365, 0.023037, -0.019545, 0.010865, -0.002081, 0.001031, -0.014854, 0.045806, -0.088445, 0.129996, -0.154339, 0.148291, -0.107518, 0.039308, 0.039308, -0.107518, 0.148291, -0.154339, 0.129996, -0.088445, 0.045806, -0.014854, 0.001031, -0.002081, 0.010865, -0.019545, 0.023037, -0.020365, 0.013808, -0.006807, 0.001963, -0.000077, 0.000393, -0.001539, 0.002435, -0.002671, 0.002357, -0.001754
};
const double * const cmu_us_rms_me_h[] = {
   cmu_us_rms_me_filter_0,
   cmu_us_rms_me_filter_1,
   cmu_us_rms_me_filter_2,
   cmu_us_rms_me_filter_3,
   cmu_us_rms_me_filter_4
};

#define cmu_us_rms_num_dur_models 1
#define cmu_us_rms_num_param_models 1
int cmu_us_rms_num_channels[] = {
    cmu_us_rms_single_num_channels
};
int cmu_us_rms_num_frames[] = {
    cmu_us_rms_single_num_frames
};
const unsigned short **cmu_us_rms_model_vectors[] = {
    (const unsigned short **)cmu_us_rms_single_model_vectors
};
const cst_cart **cmu_us_rms_mcep_carts[] = {
    (const cst_cart **)cmu_us_rms_single_mcep_carts
};
const dur_stat **cmu_us_rms_dur_stats_table[] = {
    (const dur_stat **)cmu_us_rms_dur_stats
};
const cst_cart *cmu_us_rms_dur_cart_table[] = {
    &cmu_us_rms_dur_cart
};

const cst_cg_db cmu_us_rms_cg_db = {
  "cmu_us_rms",
  cmu_us_rms_types,
  cmu_us_rms_num_types,
  16000,
  98.000000,24.000000,
  cmu_us_rms_f0_carts,
  cmu_us_rms_num_param_models,
  cmu_us_rms_mcep_carts,
  &cmu_us_rms_spamf0_accent_cart,
  &cmu_us_rms_spamf0_phrase_cart,
  cmu_us_rms_num_channels,
  cmu_us_rms_num_frames,
  cmu_us_rms_model_vectors,
  cmu_us_rms_spamf0_accent_num_channels,
  cmu_us_rms_spamf0_accent_num_frames,
  cmu_us_rms_spamf0_accent_vectors,
  cmu_us_rms_model_min,
  cmu_us_rms_model_range,
  0.005000, /* frame_advance */
  cmu_us_rms_num_dur_models,
  cmu_us_rms_dur_stats_table,
  cmu_us_rms_dur_cart_table,
  cmu_us_rms_phone_states,
  1, /* 1 if mlpg required */
  cmu_us_rms_dynwin,
  cmu_us_rms_dynwinsize,
  0.420000, /* mlsa_alpha */
  0.400000, /* mlsa_beta */
  0, /* cg:multimodel */
  1, /* cg:mixed_excitation */
  5,48, /* filter sizes */
  cmu_us_rms_me_h,
  1, // cg:spamf0
  1.5 /* gain */
};
