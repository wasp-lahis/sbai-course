#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[3] <= 1.699999988079071) {
                            if (x[3] <= 0.7000000029802322) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[1] <= 2.649999976158142) {
                                    if (x[2] <= 4.700000047683716) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[2] += 1;
                        }

                        // tree #2
                        if (x[3] <= 0.800000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 4.75) {
                                if (x[0] <= 4.950000047683716) {
                                    if (x[3] <= 1.350000023841858) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 2.549999952316284) {
                                    if (x[3] <= 1.649999976158142) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #3
                        if (x[3] <= 0.800000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 4.75) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[2] <= 4.950000047683716) {
                                    if (x[0] <= 6.200000047683716) {
                                        if (x[1] <= 3.100000023841858) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 1.649999976158142) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 5.1499998569488525) {
                                        if (x[3] <= 1.75) {
                                            if (x[1] <= 2.450000047683716) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[3] <= 1.550000011920929) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[2] <= 2.699999988079071) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 1.75) {
                                if (x[2] <= 5.049999952316284) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[0] <= 6.049999952316284) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 4.8500001430511475) {
                                    if (x[0] <= 6.049999952316284) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #5
                        if (x[3] <= 0.800000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 4.75) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[3] <= 1.75) {
                                    if (x[0] <= 7.049999952316284) {
                                        if (x[2] <= 5.049999952316284) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[2] <= 5.349999904632568) {
                                                if (x[3] <= 1.550000011920929) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[2] <= 2.449999988079071) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[2] <= 4.8500001430511475) {
                                if (x[2] <= 4.75) {
                                    if (x[3] <= 1.600000023841858) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 3.0) {
                                        if (x[3] <= 1.5999999642372131) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 5.1499998569488525) {
                                    if (x[0] <= 5.950000047683716) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 5.049999952316284) {
                                            if (x[3] <= 1.75) {
                                                if (x[0] <= 6.150000095367432) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[3] <= 0.800000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 1.6500000357627869) {
                                if (x[3] <= 1.550000011920929) {
                                    if (x[0] <= 6.049999952316284) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 6.1499998569488525) {
                                            if (x[2] <= 5.1499998569488525) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 6.75) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 1.8499999642372131) {
                                    if (x[2] <= 5.049999952316284) {
                                        if (x[2] <= 4.650000095367432) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #8
                        if (x[3] <= 0.75) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 1.75) {
                                if (x[1] <= 2.25) {
                                    if (x[0] <= 5.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 6.099999904632568) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 5.349999904632568) {
                                        if (x[3] <= 1.449999988079071) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 2.850000023841858) {
                                                if (x[0] <= 6.150000095367432) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    if (x[0] <= 6.400000095367432) {
                                                        if (x[2] <= 5.0) {
                                                            votes[1] += 1;
                                                        }

                                                        else {
                                                            votes[2] += 1;
                                                        }
                                                    }

                                                    else {
                                                        votes[1] += 1;
                                                    }
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[2] <= 4.8500001430511475) {
                                    if (x[0] <= 5.950000047683716) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #9
                        if (x[3] <= 0.800000011920929) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[3] <= 1.75) {
                                if (x[2] <= 5.049999952316284) {
                                    if (x[0] <= 4.950000047683716) {
                                        if (x[3] <= 1.350000023841858) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #10
                        if (x[2] <= 2.449999988079071) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[0] <= 6.1499998569488525) {
                                if (x[2] <= 4.75) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[3] <= 1.699999988079071) {
                                        if (x[3] <= 1.550000011920929) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 2.399999976158142) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[2] <= 4.950000047683716) {
                                        if (x[3] <= 1.649999976158142) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= 5.049999952316284) {
                                            if (x[3] <= 1.800000011920929) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                protected:
                };
            }
        }
    }