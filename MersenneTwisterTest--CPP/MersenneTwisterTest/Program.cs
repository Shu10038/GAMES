using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using MersenneTwister;

class Program
{
    static void Main(string[] args)
    {
        MersenneTwister mersenneTwister = new MersenneTwister();    // メルセンヌツイスタオブジェクトを作成する。
                                                                    //      ulong[] init = new ulong[] { 0x123, 0x234, 0x345, 0x456 };  // 必要なら種を設定する。コンストラクタで与えることも可能。ulong 一個の種も可能。
                                                                    //      mersenneTwister.init_by_array(init);                        // 〃
        double dRandomNumber = mersenneTwister.genrand_real2();     // [0,1) 区間で擬似乱数を得る。
    }
}