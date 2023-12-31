
/**
* Predict class for features vector
*/
int predict(float *x) {
    uint8_t votes[3] = { 0 };
    // tree #1
    if (x[2] <= 2.350000023841858) {
        votes[0] += 1;
    }

    else {
        if (x[2] <= 4.950000047683716) {
            if (x[3] <= 1.600000023841858) {
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

    // tree #2
    if (x[2] <= 4.75) {
        if (x[2] <= 2.75) {
            votes[0] += 1;
        }

        else {
            votes[1] += 1;
        }
    }

    else {
        if (x[3] <= 1.699999988079071) {
            if (x[1] <= 3.049999952316284) {
                if (x[0] <= 6.049999952316284) {
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

            else {
                votes[1] += 1;
            }
        }

        else {
            if (x[2] <= 4.8500001430511475) {
                if (x[1] <= 3.0) {
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

    // tree #3
    if (x[2] <= 2.350000023841858) {
        votes[0] += 1;
    }

    else {
        if (x[3] <= 1.550000011920929) {
            votes[1] += 1;
        }

        else {
            if (x[2] <= 5.049999952316284) {
                if (x[3] <= 1.75) {
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

    // tree #4
    if (x[1] <= 3.25) {
        if (x[0] <= 7.0) {
            if (x[2] <= 5.1499998569488525) {
                if (x[3] <= 0.6000000014901161) {
                    votes[0] += 1;
                }

                else {
                    if (x[2] <= 4.75) {
                        if (x[0] <= 4.950000047683716) {
                            votes[2] += 1;
                        }

                        else {
                            votes[1] += 1;
                        }
                    }

                    else {
                        if (x[3] <= 1.75) {
                            if (x[1] <= 2.450000047683716) {
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
            }

            else {
                votes[2] += 1;
            }
        }

        else {
            votes[2] += 1;
        }
    }

    else {
        if (x[2] <= 3.5500000715255737) {
            votes[0] += 1;
        }

        else {
            votes[2] += 1;
        }
    }

    // tree #5
    if (x[3] <= 0.800000011920929) {
        votes[0] += 1;
    }

    else {
        if (x[0] <= 6.6499998569488525) {
            if (x[1] <= 2.25) {
                votes[2] += 1;
            }

            else {
                if (x[1] <= 3.3000000715255737) {
                    if (x[3] <= 1.600000023841858) {
                        votes[1] += 1;
                    }

                    else {
                        if (x[1] <= 3.0500000715255737) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[0] <= 6.150000095367432) {
                                votes[1] += 1;
                            }

                            else {
                                votes[2] += 1;
                            }
                        }
                    }
                }

                else {
                    votes[2] += 1;
                }
            }
        }

        else {
            if (x[0] <= 7.049999952316284) {
                if (x[3] <= 1.899999976158142) {
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

    // tree #6
    if (x[3] <= 0.7000000029802322) {
        votes[0] += 1;
    }

    else {
        if (x[3] <= 1.75) {
            if (x[2] <= 5.299999952316284) {
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

    // tree #7
    if (x[2] <= 2.600000023841858) {
        votes[0] += 1;
    }

    else {
        if (x[2] <= 5.25) {
            if (x[3] <= 1.75) {
                if (x[1] <= 2.25) {
                    votes[2] += 1;
                }

                else {
                    votes[1] += 1;
                }
            }

            else {
                if (x[1] <= 3.100000023841858) {
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

    // tree #8
    if (x[3] <= 1.550000011920929) {
        if (x[2] <= 2.5) {
            votes[0] += 1;
        }

        else {
            if (x[3] <= 1.3499999642372131) {
                votes[1] += 1;
            }

            else {
                if (x[2] <= 4.950000047683716) {
                    votes[1] += 1;
                }

                else {
                    votes[2] += 1;
                }
            }
        }
    }

    else {
        votes[2] += 1;
    }

    // tree #9
    if (x[3] <= 1.550000011920929) {
        if (x[2] <= 2.350000023841858) {
            votes[0] += 1;
        }

        else {
            if (x[2] <= 4.950000047683716) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }
    }

    else {
        if (x[3] <= 1.75) {
            if (x[2] <= 4.75) {
                votes[2] += 1;
            }

            else {
                if (x[2] <= 5.400000095367432) {
                    votes[1] += 1;
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

    // tree #10
    if (x[0] <= 5.450000047683716) {
        if (x[3] <= 0.7000000029802322) {
            votes[0] += 1;
        }

        else {
            if (x[2] <= 4.200000047683716) {
                votes[1] += 1;
            }

            else {
                votes[2] += 1;
            }
        }
    }

    else {
        if (x[2] <= 5.200000047683716) {
            if (x[2] <= 2.600000023841858) {
                votes[0] += 1;
            }

            else {
                if (x[3] <= 1.899999976158142) {
                    votes[1] += 1;
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

void setup()
{
  Serial.begin(115200);

}

void loop() {
  float X_1[] = {5.1, 3.5, 1.4, 0.2};
  int result = predict(X_1);
  
  Serial.print("Result of predict with input X1:");
  Serial.println(result);
  delay(2000);

  float X_2[] = {6.2, 2.2, 4.5,1.5};
  result = predict(X_2);
  Serial.print("Result of predict with input X2:");
  Serial.println(result);
  delay(2000);

  float X_3[] = {6.1, 3.0, 4.9,1.8};
  result = predict(X_3);
  Serial.print("Result of predict with input X3:");
  Serial.println(result);
  delay(2000);

}
