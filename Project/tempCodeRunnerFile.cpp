switch (temp_i)
        {
            case 0:
            case 5:
                cout << setprecision(1)
                     << fixed
                     << setw(4)
                     << float(temp_i)
                     << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(5, 0.16) + 0.4275 * temp_i * pow(5, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(10, 0.16) + 0.4275 * temp_i * pow(10, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(15, 0.16) + 0.4275 * temp_i * pow(15, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(20, 0.16) + 0.4275 * temp_i * pow(20, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(25, 0.16) + 0.4275 * temp_i * pow(25, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(30, 0.16) + 0.4275 * temp_i * pow(30, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(35, 0.16) + 0.4275 * temp_i * pow(35, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(40, 0.16) + 0.4275 * temp_i * pow(40, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(45, 0.16) + 0.4275 * temp_i * pow(45, 0.16) << setw(10)
                     << endl;
                
                temp_i += 5;
                break;
            
            default : 
                cout << setprecision(1)
                     << fixed
                     << setw(2)
                     << float(temp_i)
                     << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(5, 0.16) + 0.4275 * temp_i * pow(5, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(10, 0.16) + 0.4275 * temp_i * pow(10, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(15, 0.16) + 0.4275 * temp_i * pow(15, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(20, 0.16) + 0.4275 * temp_i * pow(20, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(25, 0.16) + 0.4275 * temp_i * pow(25, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(30, 0.16) + 0.4275 * temp_i * pow(30, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(35, 0.16) + 0.4275 * temp_i * pow(35, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(40, 0.16) + 0.4275 * temp_i * pow(40, 0.16) << setw(10)
                     << 35.74 + 0.6215 * temp_i - 35.75 * pow(45, 0.16) + 0.4275 * temp_i * pow(45, 0.16) << setw(10)
                     << endl;
                
                temp_i += 5;
        }