#ifndef CALM_GOALS_TEST_VALUES_HPP
#define CALM_GOALS_TEST_VALUES_HPP

#include "definitions/dimensions.hpp"
#include "definitions/entitySet.hpp"

inline VIPRA::f3dVec goodmap_obstacles = {VIPRA::f3d{0, 3.46}, VIPRA::f3d{0, 0},
                                          VIPRA::f3d{5, 7}};
inline VIPRA::f3dVec goodmap_seats = {VIPRA::f3d{0.89, 3.1}, VIPRA::f3d{1.68, 3.1},
                                      VIPRA::f3d{2.47, 3.1}, VIPRA::f3d{3.25, 3.1}};

inline VIPRA::f3dVec goodmap_exits = {VIPRA::f3d{24.2, 3.5}};

inline VIPRA::f3dVec goodmap_endOfAisle = {VIPRA::f3d{24.1, 1.7}};

inline VIPRA::f3dVec goodmap_aisle = {VIPRA::f3d{0.89, 1.7}, VIPRA::f3d{1.68, 1.7},
                                      VIPRA::f3d{2.47, 1.7}, VIPRA::f3d{3.25, 1.7}};

inline std::vector<std::string> goodmap_types = {"exit", "endOfAisle", "aisle", "seat",
                                                 "obstacle"};

inline VIPRA::EntitySet map_value = {{"obstacle", goodmap_obstacles},
                                     {"seat", goodmap_seats},
                                     {"exit", goodmap_exits},
                                     {"endOfAilse", goodmap_endOfAisle},
                                     {"aisle", goodmap_aisle}};

inline VIPRA::f3dVec goodmap_pedestrians = {VIPRA::f3d{0.89, 3.1}, VIPRA::f3d{1.68, 3.1},
                                            VIPRA::f3d{2.47, 3.1}, VIPRA::f3d{3.25, 3.1}};

inline VIPRA::f3dVec all_peds = {VIPRA::f3d{0.89, 3.1, 0},
                                 VIPRA::f3d{1.68, 3.1, 0},
                                 VIPRA::f3d{2.47, 3.1, 0},
                                 VIPRA::f3d{3.25, 3.1, 0},
                                 VIPRA::f3d{4.04, 3.1, 0},
                                 VIPRA::f3d{4.83, 3.1, 0},
                                 VIPRA::f3d{5.62, 3.1, 0},
                                 VIPRA::f3d{6.4, 3.1, 0},
                                 VIPRA::f3d{7.19, 3.1, 0},
                                 VIPRA::f3d{7.98, 3.1, 0},
                                 VIPRA::f3d{8.76, 3.1, 0},
                                 VIPRA::f3d{9.55, 3.1, 0},
                                 VIPRA::f3d{10.34, 3.1, 0},
                                 VIPRA::f3d{11.13, 3.1, 0},
                                 VIPRA::f3d{11.91, 3.1, 0},
                                 VIPRA::f3d{12.7, 3.1, 0},
                                 VIPRA::f3d{13.9, 3.1, 0},
                                 VIPRA::f3d{15.09, 3.1, 0},
                                 VIPRA::f3d{15.88, 3.1, 0},
                                 VIPRA::f3d{16.66, 3.1, 0},
                                 VIPRA::f3d{17.450001, 3.1, 0},
                                 VIPRA::f3d{18.24, 3.1, 0},
                                 VIPRA::f3d{0.89, 2.64, 0},
                                 VIPRA::f3d{1.68, 2.64, 0},
                                 VIPRA::f3d{2.47, 2.64, 0},
                                 VIPRA::f3d{3.25, 2.64, 0},
                                 VIPRA::f3d{4.04, 2.64, 0},
                                 VIPRA::f3d{4.83, 2.64, 0},
                                 VIPRA::f3d{5.62, 2.64, 0},
                                 VIPRA::f3d{6.4, 2.64, 0},
                                 VIPRA::f3d{7.19, 2.64, 0},
                                 VIPRA::f3d{7.98, 2.64, 0},
                                 VIPRA::f3d{8.76, 2.64, 0},
                                 VIPRA::f3d{9.55, 2.64, 0},
                                 VIPRA::f3d{10.34, 2.64, 0},
                                 VIPRA::f3d{11.13, 2.64, 0},
                                 VIPRA::f3d{11.91, 2.64, 0},
                                 VIPRA::f3d{12.7, 2.64, 0},
                                 VIPRA::f3d{13.9, 2.64, 0},
                                 VIPRA::f3d{15.09, 2.64, 0},
                                 VIPRA::f3d{15.88, 2.64, 0},
                                 VIPRA::f3d{16.66, 2.64, 0},
                                 VIPRA::f3d{17.450001, 2.64, 0},
                                 VIPRA::f3d{18.24, 2.64, 0},
                                 VIPRA::f3d{0.89, 2.19, 0},
                                 VIPRA::f3d{1.68, 2.19, 0},
                                 VIPRA::f3d{2.47, 2.19, 0},
                                 VIPRA::f3d{3.25, 2.19, 0},
                                 VIPRA::f3d{4.04, 2.19, 0},
                                 VIPRA::f3d{4.83, 2.19, 0},
                                 VIPRA::f3d{5.62, 2.19, 0},
                                 VIPRA::f3d{6.4, 2.19, 0},
                                 VIPRA::f3d{7.19, 2.19, 0},
                                 VIPRA::f3d{7.98, 2.19, 0},
                                 VIPRA::f3d{8.76, 2.19, 0},
                                 VIPRA::f3d{9.55, 2.19, 0},
                                 VIPRA::f3d{10.34, 2.19, 0},
                                 VIPRA::f3d{11.13, 2.19, 0},
                                 VIPRA::f3d{11.91, 2.19, 0},
                                 VIPRA::f3d{12.7, 2.19, 0},
                                 VIPRA::f3d{13.9, 2.19, 0},
                                 VIPRA::f3d{15.09, 2.19, 0},
                                 VIPRA::f3d{15.88, 2.19, 0},
                                 VIPRA::f3d{16.66, 2.19, 0},
                                 VIPRA::f3d{17.450001, 2.19, 0},
                                 VIPRA::f3d{18.24, 2.19, 0},
                                 VIPRA::f3d{0.89, 0.36, 0},
                                 VIPRA::f3d{1.68, 0.36, 0},
                                 VIPRA::f3d{2.47, 0.36, 0},
                                 VIPRA::f3d{3.25, 0.36, 0},
                                 VIPRA::f3d{4.04, 0.36, 0},
                                 VIPRA::f3d{4.83, 0.36, 0},
                                 VIPRA::f3d{5.62, 0.36, 0},
                                 VIPRA::f3d{6.4, 0.36, 0},
                                 VIPRA::f3d{7.19, 0.36, 0},
                                 VIPRA::f3d{7.98, 0.36, 0},
                                 VIPRA::f3d{8.76, 0.36, 0},
                                 VIPRA::f3d{9.55, 0.36, 0},
                                 VIPRA::f3d{10.34, 0.36, 0},
                                 VIPRA::f3d{11.13, 0.36, 0},
                                 VIPRA::f3d{11.91, 0.36, 0},
                                 VIPRA::f3d{12.7, 0.36, 0},
                                 VIPRA::f3d{13.9, 0.36, 0},
                                 VIPRA::f3d{15.09, 0.36, 0},
                                 VIPRA::f3d{15.88, 0.36, 0},
                                 VIPRA::f3d{16.66, 0.36, 0},
                                 VIPRA::f3d{17.450001, 0.36, 0},
                                 VIPRA::f3d{18.24, 0.36, 0},
                                 VIPRA::f3d{0.89, 0.82, 0},
                                 VIPRA::f3d{1.68, 0.82, 0},
                                 VIPRA::f3d{2.47, 0.82, 0},
                                 VIPRA::f3d{3.25, 0.82, 0},
                                 VIPRA::f3d{4.04, 0.82, 0},
                                 VIPRA::f3d{4.83, 0.82, 0},
                                 VIPRA::f3d{5.62, 0.82, 0},
                                 VIPRA::f3d{6.4, 0.82, 0},
                                 VIPRA::f3d{7.19, 0.82, 0},
                                 VIPRA::f3d{7.98, 0.82, 0},
                                 VIPRA::f3d{8.76, 0.82, 0},
                                 VIPRA::f3d{9.55, 0.82, 0},
                                 VIPRA::f3d{10.34, 0.82, 0},
                                 VIPRA::f3d{11.13, 0.82, 0},
                                 VIPRA::f3d{11.91, 0.82, 0},
                                 VIPRA::f3d{12.7, 0.82, 0},
                                 VIPRA::f3d{13.9, 0.82, 0},
                                 VIPRA::f3d{15.09, 0.82, 0},
                                 VIPRA::f3d{15.88, 0.82, 0},
                                 VIPRA::f3d{16.66, 0.82, 0},
                                 VIPRA::f3d{17.450001, 0.82, 0},
                                 VIPRA::f3d{18.24, 0.82, 0},
                                 VIPRA::f3d{0.89, 1.27, 0},
                                 VIPRA::f3d{1.68, 1.27, 0},
                                 VIPRA::f3d{2.47, 1.27, 0},
                                 VIPRA::f3d{3.25, 1.27, 0},
                                 VIPRA::f3d{4.04, 1.27, 0},
                                 VIPRA::f3d{4.83, 1.27, 0},
                                 VIPRA::f3d{5.62, 1.27, 0},
                                 VIPRA::f3d{6.4, 1.27, 0},
                                 VIPRA::f3d{7.19, 1.27, 0},
                                 VIPRA::f3d{7.98, 1.27, 0},
                                 VIPRA::f3d{8.76, 1.27, 0},
                                 VIPRA::f3d{9.55, 1.27, 0},
                                 VIPRA::f3d{10.34, 1.27, 0},
                                 VIPRA::f3d{11.13, 1.27, 0},
                                 VIPRA::f3d{11.91, 1.27, 0},
                                 VIPRA::f3d{12.7, 1.27, 0},
                                 VIPRA::f3d{13.9, 1.27, 0},
                                 VIPRA::f3d{15.09, 1.27, 0},
                                 VIPRA::f3d{15.88, 1.27, 0},
                                 VIPRA::f3d{16.66, 1.27, 0},
                                 VIPRA::f3d{17.450001, 1.27, 0},
                                 VIPRA::f3d{18.24, 1.27, 0},
                                 VIPRA::f3d{19.43, 3.05, 0},
                                 VIPRA::f3d{20.58, 3.05, 0},
                                 VIPRA::f3d{21.719999, 3.05, 0},
                                 VIPRA::f3d{19.43, 2.52, 0},
                                 VIPRA::f3d{20.58, 2.52, 0},
                                 VIPRA::f3d{21.719999, 2.52, 0},
                                 VIPRA::f3d{19.43, 0.41, 0},
                                 VIPRA::f3d{20.58, 0.41, 0},
                                 VIPRA::f3d{21.719999, 0.41, 0},
                                 VIPRA::f3d{19.43, 0.94, 0},
                                 VIPRA::f3d{20.58, 0.94, 0},
                                 VIPRA::f3d{
                                     21.719999,
                                     0.94,
                                     0,
                                 }};

const VIPRA::f3dVec allPeds2 = {
    VIPRA::f3d{0.38, 1.3},    VIPRA::f3d{1.17, 1.3},    VIPRA::f3d{1.96, 1.3},
    VIPRA::f3d{2.74, 1.3},    VIPRA::f3d{3.53, 1.3},    VIPRA::f3d{4.32, 1.3},
    VIPRA::f3d{5.11, 1.3},    VIPRA::f3d{5.89, 1.3},    VIPRA::f3d{6.68, 1.3},
    VIPRA::f3d{7.47, 1.3},    VIPRA::f3d{8.25, 1.3},    VIPRA::f3d{9.04, 1.3},
    VIPRA::f3d{9.83, 1.3},    VIPRA::f3d{10.62, 1.3},   VIPRA::f3d{11.4, 1.3},
    VIPRA::f3d{12.19, 1.3},   VIPRA::f3d{12.98, 1.3},   VIPRA::f3d{13.77, 1.3},
    VIPRA::f3d{14.55, 1.3},   VIPRA::f3d{15.75, 1.3},   VIPRA::f3d{16.94, 1.3},
    VIPRA::f3d{17.86, 1.3},   VIPRA::f3d{18.77, 1.3},   VIPRA::f3d{19.68, 1.3},
    VIPRA::f3d{20.6, 1.3},    VIPRA::f3d{21.51, 1.3},   VIPRA::f3d{0.38, 0.86},
    VIPRA::f3d{1.17, 0.86},   VIPRA::f3d{1.96, 0.86},   VIPRA::f3d{2.74, 0.86},
    VIPRA::f3d{3.53, 0.86},   VIPRA::f3d{4.32, 0.86},   VIPRA::f3d{5.11, 0.86},
    VIPRA::f3d{5.89, 0.86},   VIPRA::f3d{6.68, 0.86},   VIPRA::f3d{7.47, 0.86},
    VIPRA::f3d{8.25, 0.86},   VIPRA::f3d{9.04, 0.86},   VIPRA::f3d{9.83, 0.86},
    VIPRA::f3d{10.62, 0.86},  VIPRA::f3d{11.4, 0.86},   VIPRA::f3d{12.19, 0.86},
    VIPRA::f3d{12.98, 0.86},  VIPRA::f3d{13.77, 0.86},  VIPRA::f3d{14.55, 0.86},
    VIPRA::f3d{15.75, 0.86},  VIPRA::f3d{16.94, 0.86},  VIPRA::f3d{17.86, 0.86},
    VIPRA::f3d{18.77, 0.86},  VIPRA::f3d{19.68, 0.86},  VIPRA::f3d{20.6, 0.86},
    VIPRA::f3d{21.51, 0.86},  VIPRA::f3d{0.38, 0.42},   VIPRA::f3d{1.17, 0.42},
    VIPRA::f3d{1.96, 0.42},   VIPRA::f3d{2.74, 0.42},   VIPRA::f3d{3.53, 0.42},
    VIPRA::f3d{4.32, 0.42},   VIPRA::f3d{5.11, 0.42},   VIPRA::f3d{5.89, 0.42},
    VIPRA::f3d{6.68, 0.42},   VIPRA::f3d{7.47, 0.42},   VIPRA::f3d{8.25, 0.42},
    VIPRA::f3d{9.04, 0.42},   VIPRA::f3d{9.83, 0.42},   VIPRA::f3d{10.62, 0.42},
    VIPRA::f3d{11.4, 0.42},   VIPRA::f3d{12.19, 0.42},  VIPRA::f3d{12.98, 0.42},
    VIPRA::f3d{13.77, 0.42},  VIPRA::f3d{14.55, 0.42},  VIPRA::f3d{15.75, 0.42},
    VIPRA::f3d{16.94, 0.42},  VIPRA::f3d{17.86, 0.42},  VIPRA::f3d{18.77, 0.42},
    VIPRA::f3d{19.68, 0.42},  VIPRA::f3d{20.6, 0.42},   VIPRA::f3d{21.51, 0.42},
    VIPRA::f3d{0.38, -1.3},   VIPRA::f3d{1.17, -1.3},   VIPRA::f3d{1.96, -1.3},
    VIPRA::f3d{2.74, -1.3},   VIPRA::f3d{3.53, -1.3},   VIPRA::f3d{4.32, -1.3},
    VIPRA::f3d{5.11, -1.3},   VIPRA::f3d{5.89, -1.3},   VIPRA::f3d{6.68, -1.3},
    VIPRA::f3d{7.47, -1.3},   VIPRA::f3d{8.25, -1.3},   VIPRA::f3d{9.04, -1.3},
    VIPRA::f3d{9.83, -1.3},   VIPRA::f3d{10.62, -1.3},  VIPRA::f3d{11.4, -1.3},
    VIPRA::f3d{12.19, -1.3},  VIPRA::f3d{12.98, -1.3},  VIPRA::f3d{13.77, -1.3},
    VIPRA::f3d{14.55, -1.3},  VIPRA::f3d{15.75, -1.3},  VIPRA::f3d{16.94, -1.3},
    VIPRA::f3d{17.86, -1.3},  VIPRA::f3d{18.77, -1.3},  VIPRA::f3d{19.68, -1.3},
    VIPRA::f3d{20.6, -1.3},   VIPRA::f3d{21.51, -1.3},  VIPRA::f3d{0.38, -0.86},
    VIPRA::f3d{1.17, -0.86},  VIPRA::f3d{1.96, -0.86},  VIPRA::f3d{2.74, -0.86},
    VIPRA::f3d{3.53, -0.86},  VIPRA::f3d{4.32, -0.86},  VIPRA::f3d{5.11, -0.86},
    VIPRA::f3d{5.89, -0.86},  VIPRA::f3d{6.68, -0.86},  VIPRA::f3d{7.47, -0.86},
    VIPRA::f3d{8.25, -0.86},  VIPRA::f3d{9.04, -0.86},  VIPRA::f3d{9.83, -0.86},
    VIPRA::f3d{10.62, -0.86}, VIPRA::f3d{11.4, -0.86},  VIPRA::f3d{12.19, -0.86},
    VIPRA::f3d{12.98, -0.86}, VIPRA::f3d{13.77, -0.86}, VIPRA::f3d{14.55, -0.86},
    VIPRA::f3d{15.75, -0.86}, VIPRA::f3d{16.94, -0.86}, VIPRA::f3d{17.86, -0.86},
    VIPRA::f3d{18.77, -0.86}, VIPRA::f3d{19.68, -0.86}, VIPRA::f3d{20.6, -0.86},
    VIPRA::f3d{21.51, -0.86}, VIPRA::f3d{0.38, -0.42},  VIPRA::f3d{1.17, -0.42},
    VIPRA::f3d{1.96, -0.42},  VIPRA::f3d{2.74, -0.42},  VIPRA::f3d{3.53, -0.42},
    VIPRA::f3d{4.32, -0.42},  VIPRA::f3d{5.11, -0.42},  VIPRA::f3d{5.89, -0.42},
    VIPRA::f3d{6.68, -0.42},  VIPRA::f3d{7.47, -0.42},  VIPRA::f3d{8.25, -0.42},
    VIPRA::f3d{9.04, -0.42},  VIPRA::f3d{9.83, -0.42},  VIPRA::f3d{10.62, -0.42},
    VIPRA::f3d{11.4, -0.42},  VIPRA::f3d{12.19, -0.42}, VIPRA::f3d{12.98, -0.42},
    VIPRA::f3d{13.77, -0.42}, VIPRA::f3d{14.55, -0.42}, VIPRA::f3d{15.75, -0.42},
    VIPRA::f3d{16.94, -0.42}, VIPRA::f3d{17.86, -0.42}, VIPRA::f3d{18.77, -0.42},
    VIPRA::f3d{19.68, -0.42}, VIPRA::f3d{20.6, -0.42},  VIPRA::f3d{21.51, -0.42},
    VIPRA::f3d{22.43, -0.42}, VIPRA::f3d{22.43, -0.86}, VIPRA::f3d{25.15, 1.25},
    VIPRA::f3d{26.11, 1.25},  VIPRA::f3d{27.08, 1.25},  VIPRA::f3d{28.04, 1.25},
    VIPRA::f3d{29.01, 1.25},  VIPRA::f3d{29.97, 1.25},  VIPRA::f3d{25.15, -1.25},
    VIPRA::f3d{26.11, -1.25}, VIPRA::f3d{27.08, -1.25}, VIPRA::f3d{28.04, -1.25},
    VIPRA::f3d{29.01, -1.25}, VIPRA::f3d{29.97, -1.25}, VIPRA::f3d{25.15, 0.72},
    VIPRA::f3d{26.11, 0.72},  VIPRA::f3d{27.08, 0.72},  VIPRA::f3d{28.04, 0.72},
    VIPRA::f3d{29.01, 0.72},  VIPRA::f3d{29.97, 0.72},  VIPRA::f3d{25.15, -0.72},
    VIPRA::f3d{26.11, -0.72}, VIPRA::f3d{27.08, -0.72}, VIPRA::f3d{28.04, -0.72},
    VIPRA::f3d{29.01, -0.72}, VIPRA::f3d{29.97, -0.72}};

#endif