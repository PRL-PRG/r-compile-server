fun main() {
  () -+> V { reg r:cls, reg ARMAacf:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg p:p(V +), reg r5:V, reg n:*, reg n1:V, reg r6:V, reg r7:V, reg n2:*, reg n3:V, reg r8:V, reg r9:V, reg r10:V, reg r11:V, reg ARMAacf1:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r12:V, reg r13:V, reg c1:cls, reg r14:V, reg p1:p(V +), reg r16:V, reg stopifnot:cls, reg all_equal:cls, reg unname:cls, reg A_n:*, reg A_n1:V, reg p2:p(V +), reg r18:V, reg p3:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg a_n:*, reg a_n1:V, reg c2:cls, reg r22:V, reg p4:p(V +), reg r24:V, reg p5:p(V +), reg r26:V, reg ARMAacf2:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r27:V, reg r28:V, reg c3:cls, reg r29:V, reg p6:p(V +), reg r31:V, reg zapsmall:cls, reg ARMAacf3:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r32:V, reg r33:V, reg c4:cls, reg r34:V, reg p7:p(V +), reg r36:V, reg p8:p(V +), reg r38:V, reg toeplitz:cls, reg ARMAacf4:cls, reg r39:V, reg p9:p(V +), reg r41:V |
    mkenv;
    r = clos inner2124986904;
    st ARMAacf = r;
    ARMAacf = ldf ARMAacf;
    check L0() else D0();
  D0():
    deopt 4 [];
  L0():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, -0.25);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, <lang `-`(0.25)>);
      goto L0(r1);
    };
    r5 = dyn ARMAacf[, , `lag.max`](p, 1.0, 10.0);
    check L1() else D1();
  D1():
    deopt 9 [r5];
  L1():
    st n = <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
    n = ld n;
    check L2() else D2();
  D2():
    deopt 14 [2.0, n];
  L2():
    n1 = force? n;
    checkMissing(n1);
    r6 = `-`(<missing>, n1);
    r7 = `^`(2.0, r6);
    n2 = ld n;
    check L3() else D3();
  D3():
    deopt 19 [r7, 10.666666666666666, 8.0, n2];
  L3():
    n3 = force? n2;
    checkMissing(n3);
    r8 = `*`(8.0, n3);
    r9 = `+`(10.666666666666666, r8);
    r10 = `*`(r7, r9);
    r11 = `/`(r10, 10.666666666666666);
    st `a.n` = r11;
    ARMAacf1 = ldf ARMAacf;
    check L4() else D4();
  D4():
    deopt 28 [];
  L4():
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r13):
      return r13;
    L1():
      c1 = ldf c in base;
      r14 = dyn c1(1.0, -0.25);
      goto L0(r14);
    L2():
      r12 = dyn base1(1.0, <lang `-`(0.25)>);
      goto L0(r12);
    };
    r16 = dyn ARMAacf1[, , `lag.max`](p1, 1.0, 10.0);
    check L5() else D5();
  D5():
    deopt 33 [r16];
  L5():
    st `A.n` = r16;
    stopifnot = ldf stopifnot;
    check L6() else D6();
  D6():
    deopt 36 [];
  L6():
    p5 = prom<V +>{
      all_equal = ldf `all.equal`;
      p3 = prom<V +>{
        unname = ldf unname;
        p2 = prom<V +>{
          A_n = ld `A.n`;
          A_n1 = force? A_n;
          checkMissing(A_n1);
          return A_n1;
        };
        r18 = dyn unname(p2);
        return r18;
      };
      p4 = prom<V +>{
        sym2 = ldf c;
        base2 = ldf c in base;
        guard2 = `==`.4(sym2, base2);
        if guard2 then L1() else L2();
      L0(r21):
        return r21;
      L1():
        a_n = ld `a.n`;
        a_n1 = force? a_n;
        checkMissing(a_n1);
        c2 = ldf c in base;
        r22 = dyn c2(1.0, a_n1);
        goto L0(r22);
      L2():
        r20 = dyn base2(1.0, <sym a.n>);
        goto L0(r20);
      };
      r24 = dyn all_equal(p3, p4);
      return r24;
    };
    r26 = dyn stopifnot(p5);
    check L7() else D7();
  D7():
    deopt 38 [r26];
  L7():
    ARMAacf2 = ldf ARMAacf;
    check L8() else D8();
  D8():
    deopt 40 [];
  L8():
    p6 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r28):
      return r28;
    L1():
      c3 = ldf c in base;
      r29 = dyn c3(1.0, -0.25);
      goto L0(r29);
    L2():
      r27 = dyn base3(1.0, <lang `-`(0.25)>);
      goto L0(r27);
    };
    r31 = dyn ARMAacf2[, , `lag.max`, pacf](p6, 1.0, 10.0, TRUE);
    check L9() else D9();
  D9():
    deopt 47 [r31];
  L9():
    zapsmall = ldf zapsmall;
    check L10() else D10();
  D10():
    deopt 49 [];
  L10():
    p8 = prom<V +>{
      ARMAacf3 = ldf ARMAacf;
      p7 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r33):
        return r33;
      L1():
        c4 = ldf c in base;
        r34 = dyn c4(1.0, -0.25);
        goto L0(r34);
      L2():
        r32 = dyn base4(1.0, <lang `-`(0.25)>);
        goto L0(r32);
      };
      r36 = dyn ARMAacf3[, `lag.max`, pacf](p7, 10.0, TRUE);
      return r36;
    };
    r38 = dyn zapsmall(p8);
    check L11() else D11();
  D11():
    deopt 51 [r38];
  L11():
    toeplitz = ldf toeplitz;
    check L12() else D12();
  D12():
    deopt 53 [];
  L12():
    p9 = prom<V +>{
      ARMAacf4 = ldf ARMAacf;
      r39 = dyn ARMAacf4[, `lag.max`](0.8, 7.0);
      return r39;
    };
    r41 = dyn toeplitz(p9);
    check L13() else D13();
  D13():
    deopt 55 [r41];
  L13():
    popenv;
    return r41;
  }
}
fun inner2124986904(ar, ma, `lag.max`, pacf) {
  (reg ar:*, reg ma:*, reg lag_max:*, reg pacf:*) -+> V { var ar:*, reg ar_isMissing:L, reg ar_orDefault:*, reg numeric:cls, reg r:V, reg p:p(V +), var ma:*, reg ma_isMissing:L, reg ma_orDefault:*, reg numeric1:cls, reg r2:V, reg p1:p(V +), var `lag.max`:*, reg lag_max_isMissing:L, reg lag_max_orDefault:*, reg r4:*, reg r5:V, reg p2:p(V +), var pacf:*, reg pacf_isMissing:L, reg pacf_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg ar1:*, reg ar2:V, reg length:cls, reg r9:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg ma1:*, reg ma2:V, reg length1:cls, reg r12:V, reg p3:*, reg p4:V, reg r13:V, reg c:L, reg c2:V, reg q:*, reg q1:V, reg r14:V, reg c3:L, reg c4:V, reg c6:L, reg stop:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r17:V, reg r18:V, reg p5:*, reg p6:V, reg q2:*, reg q3:V, reg r19:V, reg max:cls, reg r20:V, reg p7:*, reg p8:V, reg r21:V, reg c7:L, reg r22:*, reg r23:V, reg r24:V, reg c8:L, reg r25:*, reg r26:V, reg p9:*, reg p10:V, reg r27:V, reg c9:L, reg sym3:cls, reg base3:cls, reg guard3:L, reg r28:V, reg r29:V, reg ar3:*, reg ar4:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r30:V, reg r31:V, reg rep:cls, reg r32:V, reg c10:cls, reg r33:V, reg r34:*, reg r35:V, reg p11:*, reg p12:V, reg r37:V, reg p13:*, reg p14:V, reg p15:*, reg p16:V, reg r38:V, reg matrix:cls, reg p17:*, reg p18:V, reg p19:p(V +), reg p2_1:*, reg p2_2:V, reg p20:p(V +), reg r41:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r42:V, reg r43:V, reg p21:*, reg p22:V, reg r44:I, reg as_matrix:cls, reg expand_grid:cls, reg ind:*, reg ind1:V, reg p23:p(V +), reg ind2:*, reg ind3:V, reg p24:p(V +), reg r47:V, reg p25:p(V +), reg r49:V, reg c11:L, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r52:V, reg ind4:*, reg ind5:V, reg c12:L, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r53:V, reg ind8:*, reg ind9:V, reg c13:L, reg dx5:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __2:cls, reg r54:V, reg r55:V, reg r56:V, reg l:*, reg c14:L, reg r58:V, reg dr6:V, reg dc3:L, reg dx10:V, reg dx11:V, reg ___:cls, reg r61:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r62:V, reg r63:V, reg ar5:*, reg ar6:V, reg r64:V, reg c15:cls, reg r65:V, reg l3:*, reg c16:L, reg r67:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg ind12:*, reg ind13:V, reg ___1:cls, reg r70:V, reg A:*, reg A1:V, reg c17:L, reg A3:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg p26:*, reg p27:V, reg r71:V, reg __3:cls, reg r72:V, reg A4:*, reg A5:V, reg c18:L, reg dx17:V, reg A7:V, reg dr12:V, reg dc6:L, reg dx19:V, reg dx20:V, reg dx21:V, reg p2_3:*, reg p2_4:V, reg p28:*, reg p29:V, reg r73:V, reg r74:V, reg __4:cls, reg r75:V, reg r76:V, reg l6:*, reg c19:L, reg r78:V, reg l8:*, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg p30:*, reg p31:V, reg r81:V, reg ___2:cls, reg r82:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r83:V, reg r84:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r85:V, reg r86:V, reg rep1:cls, reg r87:V, reg c20:cls, reg r88:V, reg q4:*, reg q5:V, reg r89:V, reg c21:L, reg sym9:cls, reg base9:cls, reg guard9:L, reg r90:V, reg r91:V, reg ARMAtoMA:cls, reg ar7:*, reg ar8:V, reg p32:p(V +), reg ma3:*, reg ma4:V, reg p33:p(V +), reg q6:*, reg q7:V, reg p34:p(V +), reg r95:V, reg c22:cls, reg r96:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r97:V, reg r98:V, reg ma5:*, reg ma6:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r99:V, reg r100:V, reg rep2:cls, reg r101:V, reg c23:cls, reg r102:V, reg q8:*, reg q9:V, reg r103:V, reg r104:V, reg s:V, reg l9:I, reg i:I, reg i1:I, reg i2:I, reg c24:L, reg x:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r105:V, reg i7:I, reg r106:V, reg psi:*, reg psi1:V, reg theta:*, reg theta1:V, reg c25:L, reg i9:I, reg psi3:V, reg theta3:V, reg dr16:V, reg dc8:L, reg dx24:V, reg i11:I, reg psi5:V, reg dx25:V, reg k:*, reg k1:V, reg q10:*, reg q11:V, reg r107:V, reg r108:V, reg __5:cls, reg r109:V, reg r110:V, reg sum:cls, reg r111:V, reg l10:*, reg c26:L, reg i13:I, reg r113:V, reg l12:*, reg dr18:V, reg dc9:L, reg dx26:V, reg i15:I, reg dx27:V, reg k2:*, reg k3:V, reg ___3:cls, reg r116:V, reg p35:*, reg p36:V, reg r117:V, reg solve:cls, reg A8:*, reg A9:V, reg c27:L, reg A11:V, reg dr20:V, reg dc10:L, reg dx28:V, reg dx29:V, reg ind14:*, reg ind15:V, reg ind16:*, reg ind17:V, reg __6:cls, reg r118:V, reg p37:p(V +), reg rhs:*, reg rhs1:V, reg p38:p(V +), reg r121:V, reg Acf:*, reg Acf1:V, reg c28:L, reg Acf3:V, reg dr22:V, reg dc11:L, reg dx30:V, reg dx31:V, reg __7:cls, reg r122:V, reg Acf4:*, reg Acf5:V, reg c29:L, reg dx33:V, reg Acf7:V, reg dr24:V, reg dc12:L, reg dx35:V, reg dx36:V, reg dx37:V, reg __8:cls, reg r123:V, reg r124:V, reg ar9:*, reg ar10:V, reg lag_max1:*, reg lag_max2:V, reg p39:*, reg p40:V, reg r126:V, reg c30:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r127:V, reg r128:V, reg rep3:cls, reg r129:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r130:V, reg r131:V, reg Acf8:*, reg Acf9:V, reg filter:cls, reg xx:*, reg xx1:V, reg p41:p(V +), reg ar11:*, reg ar12:V, reg p42:p(V +), reg rev:cls, reg Acf10:*, reg Acf11:V, reg p43:p(V +), reg r135:V, reg p44:p(V +), reg r137:V, reg c31:cls, reg r138:V, reg sym15:cls, reg base15:cls, reg guard15:L, reg r140:V, reg r141:V, reg Acf12:*, reg Acf13:V, reg c32:L, reg Acf15:V, reg dr26:V, reg dc13:L, reg dx38:V, reg dx39:V, reg lag_max3:*, reg lag_max4:V, reg r142:V, reg __9:cls, reg r143:V, reg c33:cls, reg r144:V, reg q12:*, reg q13:V, reg r146:V, reg c34:L, reg sym16:cls, reg base16:cls, reg guard16:L, reg r147:V, reg r148:V, reg ma7:*, reg ma8:V, reg c35:cls, reg r149:V, reg filter1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r150:V, reg r151:V, reg x1:*, reg x2:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r152:V, reg r153:V, reg rep4:cls, reg r154:V, reg c36:cls, reg r155:V, reg p45:p(V +), reg rev1:cls, reg x3:*, reg x4:V, reg p46:p(V +), reg r158:V, reg p47:p(V +), reg r160:V, reg c37:L, reg r162:V, reg dr28:V, reg dc14:L, reg dx40:V, reg dx41:V, reg q14:*, reg q15:V, reg r163:V, reg r164:V, reg __10:cls, reg r165:V, reg lag_max5:*, reg lag_max6:V, reg q16:*, reg q17:V, reg r166:V, reg c38:L, reg sym19:cls, reg base19:cls, reg guard19:L, reg r167:V, reg r168:V, reg Acf16:*, reg Acf17:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r169:V, reg r170:V, reg rep5:cls, reg r171:V, reg c39:cls, reg r172:V, reg Acf18:*, reg Acf19:V, reg Acf20:*, reg Acf21:V, reg c40:L, reg Acf24:V, reg Acf25:V, reg dr30:V, reg dc15:L, reg dx42:V, reg Acf27:V, reg dx43:V, reg __11:cls, reg r174:V, reg r175:V, reg lag_max7:*, reg lag_max8:V, reg r176:V, reg l13:*, reg names__:cls, reg r177:V, reg pacf1:*, reg pacf2:V, reg c41:L, reg sym21:cls, reg base21:cls, reg guard21:L, reg r178:V, reg r179:V, reg sym22:cls, reg base22:cls, reg guard22:L, reg r180:V, reg r181:V, reg C_pacf1:*, reg C_pacf2:V, reg Acf28:*, reg Acf29:V, reg lag_max9:*, reg lag_max10:V, reg vargs:dots, reg r182:V, reg drop:cls, reg r183:V, reg Acf30:*, reg Acf31:V |
    mkenv;
    ar_isMissing = missing.0(ar);
    if ar_isMissing then L0() else L1(ar);
  L0():
    p = prom<V +>{
      numeric = ldf numeric;
      r = dyn numeric();
      return r;
    };
    goto L1(p);
  L1(ar_orDefault):
    st ar = ar_orDefault;
    ma_isMissing = missing.0(ma);
    if ma_isMissing then L2() else L3(ma);
  L2():
    p1 = prom<V +>{
      numeric1 = ldf numeric;
      r2 = dyn numeric1();
      return r2;
    };
    goto L3(p1);
  L3(ma_orDefault):
    st ma = ma_orDefault;
    lag_max_isMissing = missing.0(lag_max);
    if lag_max_isMissing then L4() else L5(lag_max);
  L4():
    p2 = prom<V +>{
      r4 = ld r;
      r5 = force? r4;
      checkMissing(r5);
      return r5;
    };
    goto L5(p2);
  L5(lag_max_orDefault):
    st `lag.max` = lag_max_orDefault;
    pacf_isMissing = missing.0(pacf);
    if pacf_isMissing then L6(FALSE) else L6(pacf);
  L6(pacf_orDefault):
    st pacf = pacf_orDefault;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L62() else L63();
  L7(r8):
    st p = r8;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L66() else L67();
  L62():
    ar1 = ld ar;
    check L64() else D0();
  L63():
    r7 = dyn base(<sym ar>);
    goto L7(r7);
  D0():
    deopt 2 [ar1];
  L8(r11):
    st q = r11;
    p3 = ld p;
    check L70() else D4();
  L64():
    ar2 = force? ar1;
    checkMissing(ar2);
    length = ldf length in base;
    r9 = dyn length(ar2);
    check L65() else D1();
  L66():
    ma1 = ld ma;
    check L68() else D2();
  L67():
    r10 = dyn base1(<sym ma>);
    goto L8(r10);
  D1():
    deopt 5 [r9];
  D2():
    deopt 9 [ma1];
  D4():
    deopt 14 [p3];
  L65():
    goto L7(r9);
  L68():
    ma2 = force? ma1;
    checkMissing(ma2);
    length1 = ldf length in base;
    r12 = dyn length1(ma2);
    check L69() else D3();
  L70():
    p4 = force? p3;
    checkMissing(p4);
    r13 = `!`(p4);
    c = `as.logical`(r13);
    if c then L71() else L9(c);
  D3():
    deopt 12 [r12];
  L9(c2):
    c6 = `as.logical`(c2);
    if c6 then L74() else L10();
  L69():
    goto L8(r12);
  L71():
    q = ld q;
    check L72() else D5();
  D5():
    deopt 17 [c, q];
  L10():
    goto L11();
  L11():
    sym2 = ldf max;
    base2 = ldf max in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L78() else L79();
  L72():
    q1 = force? q;
    checkMissing(q1);
    r14 = `!`(q1);
    c3 = `as.logical`(r14);
    c4 = `&&`(c, c3);
    goto L9(c4);
  L74():
    stop = ldf stop;
    check L75() else D6();
  D6():
    deopt 22 [];
  L12(r18):
    st r = r18;
    p7 = ld p;
    check L83() else D11();
  L75():
    r15 = dyn stop("empty model supplied");
    check L76() else D7();
  L78():
    p5 = ld p;
    check L80() else D8();
  L79():
    r17 = dyn base2(<sym p>, <lang `+`(q, 1.0)>);
    goto L12(r17);
  D7():
    deopt 24 [r15];
  D8():
    deopt 29 [p5];
  D11():
    deopt 38 [p7];
  L76():
    goto L11();
  L80():
    p6 = force? p5;
    checkMissing(p6);
    q2 = ld q;
    check L81() else D9();
  L83():
    p8 = force? p7;
    checkMissing(p8);
    r21 = `>`(p8, 0.0);
    c7 = `as.logical`(r21);
    if c7 then L84() else L13();
  D9():
    deopt 31 [q2];
  L13():
    q12 = ld q;
    check L214() else D66();
  L50():
    lag_max7 = ld `lag.max`;
    check L242() else D78();
  L81():
    q3 = force? q2;
    checkMissing(q3);
    r19 = `+`(q3, 1.0);
    max = ldf max in base;
    r20 = dyn max(p6, r19);
    check L82() else D10();
  L84():
    r22 = ld r;
    check L85() else D12();
  D10():
    deopt 36 [r20];
  D12():
    deopt 42 [r22];
  D66():
    deopt 289 [q12];
  D78():
    deopt 342 [0.0, lag_max7];
  L82():
    goto L12(r20);
  L85():
    r23 = force? r22;
    checkMissing(r23);
    r24 = `>`(r23, 1.0);
    c8 = `as.logical`(r24);
    if c8 then L86() else L14();
  L214():
    q13 = force? q12;
    checkMissing(q13);
    r146 = `>`(q13, 0.0);
    c34 = `as.logical`(r146);
    if c34 then L215() else L51();
  L242():
    lag_max8 = force? lag_max7;
    checkMissing(lag_max8);
    r176 = `:`(0.0, lag_max8);
    l13 = ld Acf;
    names__ = ldf `names<-`;
    check L243() else D79();
  D79():
    deopt 346 [r176, l13, r176];
  L14():
    ar9 = ld ar;
    check L192() else D56();
  L43():
    lag_max1 = ld `lag.max`;
    check L193() else D57();
  L51():
    goto L50();
  L86():
    r25 = ld r;
    check L87() else D13();
  L215():
    sym16 = ldf c;
    base16 = ldf c in base;
    guard16 = `==`.4(sym16, base16);
    if guard16 then L216() else L217();
  L243():
    r177 = dyn names__(l13, NULL, r176);
    check L244() else D80();
  D13():
    deopt 46 [r25];
  D56():
    deopt 248 [ar9];
  D57():
    deopt 251 [lag_max1];
  D80():
    deopt 348 [r176, r177];
  L52(r148):
    st x = r148;
    filter1 = ldf filter;
    check L220() else D69();
  L87():
    r26 = force? r25;
    checkMissing(r26);
    p9 = ld p;
    check L88() else D14();
  L192():
    ar10 = force? ar9;
    checkMissing(ar10);
    st Acf = ar10;
    goto L43();
  L193():
    lag_max2 = force? lag_max1;
    checkMissing(lag_max2);
    p39 = ld p;
    check L194() else D58();
  L216():
    ma7 = ld ma;
    check L218() else D67();
  L217():
    r147 = dyn base16(1.0, <sym ma>);
    goto L52(r147);
  L244():
    st Acf = r177;
    pacf1 = ld pacf;
    check L245() else D81();
  D14():
    deopt 47 [r26, p9];
  D58():
    deopt 252 [lag_max2, p39];
  D67():
    deopt 296 [ma7];
  D69():
    deopt 302 [];
  D81():
    deopt 350 [pacf1];
  L88():
    p10 = force? p9;
    checkMissing(p10);
    r27 = `>`(r26, p10);
    c9 = `as.logical`(r27);
    if c9 then L89() else L15();
  L194():
    p40 = force? p39;
    checkMissing(p40);
    r126 = `>`(lag_max2, p40);
    c30 = `as.logical`(r126);
    if c30 then L195() else L44();
  L218():
    ma8 = force? ma7;
    checkMissing(ma8);
    c35 = ldf c in base;
    r149 = dyn c35(1.0, ma8);
    check L219() else D68();
  L220():
    p45 = prom<V +>{
      sym17 = ldf c;
      base17 = ldf c in base;
      guard17 = `==`.4(sym17, base17);
      if guard17 then L2() else L3();
    L0(r151):
      return r151;
    L2():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      sym18 = ldf rep;
      base18 = ldf rep in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L4() else L5();
    L3():
      r150 = dyn base17(<sym x>, <lang rep(0.0, q)>);
      goto L0(r150);
    L1(r153):
      c36 = ldf c in base;
      r155 = dyn c36(x2, r153);
      goto L0(r155);
    L4():
      rep4 = ldf rep in base;
      r154 = dyn rep4(0.0, <sym q>);
      goto L1(r154);
    L5():
      r152 = dyn base18(0.0, <sym q>);
      goto L1(r152);
    };
    p47 = prom<V +>{
      rev1 = ldf rev;
      p46 = prom<V +>{
        x3 = ld x;
        x4 = force? x3;
        checkMissing(x4);
        return x4;
      };
      r158 = dyn rev1(p46);
      return r158;
    };
    r160 = dyn filter1[, , sides](p45, p47, 1.0);
    check L221() else D70();
  L245():
    pacf2 = force? pacf1;
    checkMissing(pacf2);
    c41 = `as.logical`(pacf2);
    if c41 then L246() else L59();
  D68():
    deopt 299 [r149];
  D70():
    deopt 307 [r160];
  L15():
    goto L18();
  L18():
    p11 = ld p;
    check L98() else D18();
  L44():
    goto L47();
  L47():
    sym15 = ldf c;
    base15 = ldf c in base;
    guard15 = `==`.4(sym15, base15);
    if guard15 then L205() else L206();
  L59():
    Acf30 = ld Acf;
    check L256() else D86();
  L89():
    sym3 = ldf c;
    base3 = ldf c in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L90() else L91();
  L195():
    sym13 = ldf rep;
    base13 = ldf rep in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L196() else L197();
  L219():
    goto L52(r149);
  L221():
    c37 = `is.object`(r160);
    if c37 then L222() else L223(r160);
  L246():
    sym21 = ldf drop;
    base21 = ldf drop in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L247() else L248();
  D18():
    deopt 65 [p11];
  D86():
    deopt 362 [Acf30];
  L16(r29):
    st ar = r29;
    r34 = ld r;
    check L96() else D17();
  L45(r128):
    st xx = r128;
    sym14 = ldf c;
    base14 = ldf c in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L198() else L199();
  L48(r141):
    st Acf = r141;
    goto L50();
  L53(dx41):
    st Acf = dx41;
    lag_max5 = ld `lag.max`;
    check L226() else D72();
  L60(r179):
    popenv;
    return r179;
  L90():
    ar3 = ld ar;
    check L92() else D15();
  L91():
    r28 = dyn base3(<sym ar>, <lang rep(0.0, `-`(r, p))>);
    goto L16(r28);
  L98():
    p12 = force? p11;
    checkMissing(p12);
    r37 = `+`(p12, 1);
    st p1 = r37;
    p13 = ld p;
    check L99() else D19();
  L196():
    rep3 = ldf rep in base;
    r129 = dyn rep3(0.0, <lang `-`(lag.max, p)>);
    goto L45(r129);
  L197():
    r127 = dyn base13(0.0, <lang `-`(lag.max, p)>);
    goto L45(r127);
  L205():
    Acf12 = ld Acf;
    check L207() else D63();
  L206():
    r140 = dyn base15(1.0, <lang `[`(Acf, `:`(1, lag.max))>);
    goto L48(r140);
  L222():
    dr28 = tryDispatchBuiltin.1("[", r160);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L224() else L223(dr28);
  L223(r162):
    q14 = ld q;
    check L225() else D71();
  L247():
    sym22 = ldf `.Call`;
    base22 = ldf `.Call` in base;
    guard22 = `==`.4(sym22, base22);
    if guard22 then L249() else L250();
  L248():
    r178 = dyn base21(<lang .Call(C_pacf1, Acf, lag.max)>);
    goto L60(r178);
  L256():
    Acf31 = force? Acf30;
    checkMissing(Acf31);
    popenv;
    return Acf31;
  D15():
    deopt 52 [ar3];
  D17():
    deopt 60 [r34];
  D19():
    deopt 70 [p13];
  D63():
    deopt 279 [Acf12];
  D71():
    deopt 309 [r162, 1, q14];
  D72():
    deopt 315 [lag_max5];
  L46(r131):
    st Acf = r131;
    goto L47();
  L61(r181):
    drop = ldf drop in base;
    r183 = dyn drop(r181);
    check L254() else D85();
  L92():
    ar4 = force? ar3;
    checkMissing(ar4);
    sym4 = ldf rep;
    base4 = ldf rep in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L93() else L94();
  L96():
    r35 = force? r34;
    checkMissing(r35);
    st p = r35;
    goto L18();
  L99():
    p14 = force? p13;
    checkMissing(p14);
    p15 = ld p1;
    check L100() else D20();
  L198():
    Acf8 = ld Acf;
    check L200() else D59();
  L199():
    r130 = dyn base14(<sym Acf>, <lang filter(xx, ar, "recursive", init=rev(Acf))>);
    goto L46(r130);
  L207():
    Acf13 = force? Acf12;
    checkMissing(Acf13);
    c32 = `is.object`(Acf13);
    if c32 then L208() else L209(Acf13);
  L224():
    dx40 = getTryDispatchBuiltinValue(dr28);
    goto L53(dx40);
  L225():
    q15 = force? q14;
    checkMissing(q15);
    r163 = `:`(1, q15);
    r164 = `-`(<missing>, r163);
    __10 = ldf `[` in base;
    r165 = dyn __10(r162, r164);
    goto L53(r165);
  L226():
    lag_max6 = force? lag_max5;
    checkMissing(lag_max6);
    q16 = ld q;
    check L227() else D73();
  L249():
    C_pacf1 = ld C_pacf1;
    check L251() else D82();
  L250():
    r180 = dyn base22(<sym C_pacf1>, <sym Acf>, <sym lag.max>);
    goto L61(r180);
  D20():
    deopt 71 [p14, p15];
  D59():
    deopt 261 [Acf8];
  D73():
    deopt 316 [lag_max6, q16];
  D82():
    deopt 355 [C_pacf1];
  D85():
    deopt 361 [r183];
  L17(r31):
    c10 = ldf c in base;
    r33 = dyn c10(ar4, r31);
    check L95() else D16();
  L49(dx39):
    c33 = ldf c in base;
    r144 = dyn c33(1.0, dx39);
    check L212() else D65();
  L93():
    rep = ldf rep in base;
    r32 = dyn rep(0.0, <lang `-`(r, p)>);
    goto L17(r32);
  L94():
    r30 = dyn base4(0.0, <lang `-`(r, p)>);
    goto L17(r30);
  L100():
    p16 = force? p15;
    checkMissing(p16);
    r38 = `+`(p14, p16);
    st `p2.1` = r38;
    matrix = ldf matrix;
    check L101() else D21();
  L200():
    Acf9 = force? Acf8;
    checkMissing(Acf9);
    filter = ldf filter;
    check L201() else D60();
  L208():
    dr26 = tryDispatchBuiltin.1("[", Acf13);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L210() else L209(dr26);
  L209(Acf15):
    lag_max3 = ld `lag.max`;
    check L211() else D64();
  L227():
    q17 = force? q16;
    checkMissing(q17);
    r166 = `>`(lag_max6, q17);
    c38 = `as.logical`(r166);
    if c38 then L228() else L54();
  L251():
    C_pacf2 = force? C_pacf1;
    checkMissing(C_pacf2);
    Acf28 = ld Acf;
    check L252() else D83();
  L254():
    goto L60(r183);
  D16():
    deopt 58 [r33];
  D21():
    deopt 76 [];
  D60():
    deopt 264 [];
  D64():
    deopt 282 [Acf15, 1, lag_max3];
  D65():
    deopt 287 [r144];
  D83():
    deopt 356 [C_pacf2, Acf28];
  L54():
    goto L57();
  L57():
    Acf18 = ld Acf;
    check L236() else D76();
  L95():
    goto L16(r33);
  L101():
    p19 = prom<V +>{
      p17 = ld p1;
      p18 = force? p17;
      checkMissing(p18);
      return p18;
    };
    p20 = prom<V +>{
      p2_1 = ld `p2.1`;
      p2_2 = force? p2_1;
      checkMissing(p2_2);
      return p2_2;
    };
    r41 = dyn matrix(0.0, p19, p20);
    check L102() else D22();
  L201():
    p41 = prom<V +>{
      xx = ld xx;
      xx1 = force? xx;
      checkMissing(xx1);
      return xx1;
    };
    p42 = prom<V +>{
      ar11 = ld ar;
      ar12 = force? ar11;
      checkMissing(ar12);
      return ar12;
    };
    p44 = prom<V +>{
      rev = ldf rev;
      p43 = prom<V +>{
        Acf10 = ld Acf;
        Acf11 = force? Acf10;
        checkMissing(Acf11);
        return Acf11;
      };
      r135 = dyn rev(p43);
      return r135;
    };
    r137 = dyn filter[, , , init](p41, p42, "recursive", p44);
    check L202() else D61();
  L210():
    dx38 = getTryDispatchBuiltinValue(dr26);
    goto L49(dx38);
  L211():
    lag_max4 = force? lag_max3;
    checkMissing(lag_max4);
    r142 = `:`(1, lag_max4);
    __9 = ldf `[` in base;
    r143 = dyn __9(Acf15, r142);
    goto L49(r143);
  L212():
    goto L48(r144);
  L228():
    sym19 = ldf c;
    base19 = ldf c in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L229() else L230();
  L252():
    Acf29 = force? Acf28;
    checkMissing(Acf29);
    lag_max9 = ld `lag.max`;
    check L253() else D84();
  D22():
    deopt 80 [r41];
  D61():
    deopt 270 [r137];
  D76():
    deopt 331 [Acf18];
  D84():
    deopt 357 [C_pacf2, Acf29, lag_max9];
  L55(r168):
    st Acf = r168;
    goto L57();
  L102():
    st A = r41;
    sym5 = ldf seq_len;
    base5 = ldf seq_len in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L103() else L104();
  L202():
    c31 = ldf c in base;
    r138 = dyn c31(Acf9, r137);
    check L203() else D62();
  L229():
    Acf16 = ld Acf;
    check L231() else D74();
  L230():
    r167 = dyn base19(<sym Acf>, <lang rep(0.0, `-`(lag.max, q))>);
    goto L55(r167);
  L236():
    Acf19 = force? Acf18;
    checkMissing(Acf19);
    Acf20 = ld Acf;
    check L237() else D77();
  L253():
    lag_max10 = force? lag_max9;
    checkMissing(lag_max10);
    vargs = dots[Acf29, lag_max10];
    r182 = `.Call`(C_pacf2, vargs, <missing>);
    goto L61(r182);
  D62():
    deopt 272 [r138];
  D74():
    deopt 321 [Acf16];
  D77():
    deopt 332 [Acf19, Acf20];
  L19(r43):
    st ind = r43;
    as_matrix = ldf `as.matrix`;
    check L106() else D24();
  L103():
    p21 = ld p1;
    check L105() else D23();
  L104():
    r42 = dyn base5(<sym p1>);
    goto L19(r42);
  L203():
    goto L46(r138);
  L231():
    Acf17 = force? Acf16;
    checkMissing(Acf17);
    sym20 = ldf rep;
    base20 = ldf rep in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L232() else L233();
  L237():
    Acf21 = force? Acf20;
    checkMissing(Acf21);
    c40 = `is.object`(Acf21);
    if c40 then L238() else L239(Acf19, Acf21);
  D23():
    deopt 83 [p21];
  D24():
    deopt 88 [];
  L56(r170):
    c39 = ldf c in base;
    r172 = dyn c39(Acf17, r170);
    check L234() else D75();
  L58(Acf27, dx43):
    r175 = `/`(Acf27, dx43);
    st Acf = r175;
    goto L50();
  L105():
    p22 = force? p21;
    checkMissing(p22);
    r44 = seq_len(p22);
    goto L19(r44);
  L106():
    p25 = prom<V +>{
      expand_grid = ldf `expand.grid`;
      p23 = prom<V +>{
        ind = ld ind;
        ind1 = force? ind;
        checkMissing(ind1);
        return ind1;
      };
      p24 = prom<V +>{
        ind2 = ld ind;
        ind3 = force? ind2;
        checkMissing(ind3);
        return ind3;
      };
      r47 = dyn expand_grid(p23, p24);
      return r47;
    };
    r49 = dyn as_matrix(p25);
    check L107() else D25();
  L232():
    rep5 = ldf rep in base;
    r171 = dyn rep5(0.0, <lang `-`(lag.max, q)>);
    goto L56(r171);
  L233():
    r169 = dyn base20(0.0, <lang `-`(lag.max, q)>);
    goto L56(r169);
  L238():
    dr30 = tryDispatchBuiltin.1("[", Acf21);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L240() else L239(Acf19, dr30);
  L239(Acf24, Acf25):
    __11 = ldf `[` in base;
    r174 = dyn __11(Acf25, 1);
    goto L58(Acf24, r174);
  D25():
    deopt 90 [r49];
  D75():
    deopt 327 [r172];
  L107():
    c11 = `is.object`(r49);
    if c11 then L108() else L109();
  L234():
    goto L55(r172);
  L240():
    dx42 = getTryDispatchBuiltinValue(dr30);
    goto L58(Acf19, dx42);
  L20(dx1):
    st ind = dx1;
    ind4 = ld ind;
    check L111() else D26();
  L108():
    dr = tryDispatchBuiltin.1("[", r49);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L110() else L109();
  L109():
    __ = ldf `[` in base;
    r52 = dyn __(r49, <missing>, <int 2, 1>);
    goto L20(r52);
  D26():
    deopt 97 [ind4];
  L110():
    dx = getTryDispatchBuiltinValue(dr);
    goto L20(dx);
  L111():
    ind5 = force? ind4;
    checkMissing(ind5);
    c12 = `is.object`(ind5);
    if c12 then L112() else L113();
  L21(dx3):
    ind8 = ld ind;
    check L115() else D27();
  L112():
    dr2 = tryDispatchBuiltin.1("[", ind5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L114() else L113();
  L113():
    __1 = ldf `[` in base;
    r53 = dyn __1(ind5, <missing>, 1);
    goto L21(r53);
  D27():
    deopt 102 [dx3, ind8];
  L114():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L21(dx2);
  L115():
    ind9 = force? ind8;
    checkMissing(ind9);
    c13 = `is.object`(ind9);
    if c13 then L116() else L117(dx3);
  L22(dx8, dx9):
    r55 = `+`(dx8, dx9);
    r56 = `-`(r55, 1);
    l = ld ind;
    c14 = `is.object`(l);
    if c14 then L119() else L120(r56);
  L116():
    dr4 = tryDispatchBuiltin.1("[", ind9);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L118() else L117(dx3);
  L117(dx5):
    __2 = ldf `[` in base;
    r54 = dyn __2(ind9, <missing>, 2);
    goto L22(dx5, r54);
  L23(dx11):
    st ind = dx11;
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L122() else L123();
  L118():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L22(dx3, dx7);
  L119():
    dr6 = tryDispatchBuiltin.0("[<-", l, r56);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L121() else L120(r56);
  L120(r58):
    ___ = ldf `[<-` in base;
    r61 = dyn ___(l, <missing>, 2.0, r56);
    goto L23(r61);
  L24(r63):
    l3 = ld A;
    c16 = `is.object`(l3);
    if c16 then L126() else L127(r63, l3);
  L121():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L23(dx10);
  L122():
    ar5 = ld ar;
    check L124() else D28();
  L123():
    r62 = dyn base6(1.0, <lang `-`(ar)>);
    goto L24(r62);
  D28():
    deopt 120 [ar5];
  L25(dx13):
    st A = dx13;
    A = ld A;
    check L130() else D31();
  L124():
    ar6 = force? ar5;
    checkMissing(ar6);
    r64 = `-`(<missing>, ar6);
    c15 = ldf c in base;
    r65 = dyn c15(1.0, r64);
    check L125() else D29();
  L126():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r63);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L128() else L127(r63, dr8);
  L127(r67, l5):
    ind12 = ld ind;
    check L129() else D30();
  D29():
    deopt 124 [r65];
  D30():
    deopt 126 [r67, l5, r63, ind12];
  D31():
    deopt 130 [A];
  L125():
    goto L24(r65);
  L128():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L25(dx12);
  L129():
    ind13 = force? ind12;
    ___1 = ldf `[<-` in base;
    r70 = dyn ___1(l5, r63, ind13);
    goto L25(r70);
  L130():
    A1 = force? A;
    checkMissing(A1);
    c17 = `is.object`(A1);
    if c17 then L131() else L132(A1);
  L26(dx15):
    A4 = ld A;
    check L135() else D33();
  L131():
    dr10 = tryDispatchBuiltin.1("[", A1);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L133() else L132(dr10);
  L132(A3):
    p26 = ld p;
    check L134() else D32();
  D32():
    deopt 134 [A3, 1, p26];
  D33():
    deopt 138 [dx15, A4];
  L133():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L26(dx14);
  L134():
    p27 = force? p26;
    checkMissing(p27);
    r71 = `:`(1, p27);
    __3 = ldf `[` in base;
    r72 = dyn __3(A1, <missing>, r71);
    goto L26(r72);
  L135():
    A5 = force? A4;
    checkMissing(A5);
    c18 = `is.object`(A5);
    if c18 then L136() else L137(dx15, A5);
  L27(dx20, dx21):
    r76 = `+`(dx20, dx21);
    l6 = ld A;
    c19 = `is.object`(l6);
    if c19 then L141() else L142(r76, l6);
  L136():
    dr12 = tryDispatchBuiltin.1("[", A5);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L138() else L137(dx15, dr12);
  L137(dx17, A7):
    p2_3 = ld `p2.1`;
    check L139() else D34();
  D34():
    deopt 141 [dx17, A7, p2_3];
  L28(dx23):
    st A = dx23;
    sym7 = ldf c;
    base7 = ldf c in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L145() else L146();
  L138():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L27(dx15, dx19);
  L139():
    p2_4 = force? p2_3;
    checkMissing(p2_4);
    p28 = ld p;
    check L140() else D35();
  L141():
    dr14 = tryDispatchBuiltin.0("[<-", l6, r76);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L143() else L142(r76, dr14);
  L142(r78, l8):
    p30 = ld p;
    check L144() else D36();
  D35():
    deopt 142 [dx17, A7, p2_4, p28];
  D36():
    deopt 153 [r78, l8, r76, 1, p30];
  L29(r84):
    st rhs = r84;
    q4 = ld q;
    check L150() else D38();
  L140():
    p29 = force? p28;
    checkMissing(p29);
    r73 = `+`(p29, 2);
    r74 = `:`(p2_4, r73);
    __4 = ldf `[` in base;
    r75 = dyn __4(A5, <missing>, r74);
    goto L27(dx17, r75);
  L143():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L28(dx22);
  L144():
    p31 = force? p30;
    checkMissing(p31);
    r81 = `:`(1, p31);
    ___2 = ldf `[<-` in base;
    r82 = dyn ___2(l6, <missing>, r81, r76);
    goto L28(r82);
  L145():
    sym8 = ldf rep;
    base8 = ldf rep in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L147() else L148();
  L146():
    r83 = dyn base7(1.0, <lang rep(0.0, p)>);
    goto L29(r83);
  D38():
    deopt 168 [q4];
  L30(r86):
    c20 = ldf c in base;
    r88 = dyn c20(1.0, r86);
    check L149() else D37();
  L147():
    rep1 = ldf rep in base;
    r87 = dyn rep1(0.0, <sym p>);
    goto L30(r87);
  L148():
    r85 = dyn base8(0.0, <sym p>);
    goto L30(r85);
  L150():
    q5 = force? q4;
    checkMissing(q5);
    r89 = `>`(q5, 0.0);
    c21 = `as.logical`(r89);
    if c21 then L151() else L31();
  D37():
    deopt 166 [r88];
  L31():
    goto L40();
  L40():
    p35 = ld p1;
    check L180() else D51();
  L149():
    goto L29(r88);
  L151():
    sym9 = ldf c;
    base9 = ldf c in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L152() else L153();
  D51():
    deopt 226 [p35];
  L32(r91):
    st psi = r91;
    sym10 = ldf c;
    base10 = ldf c in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L157() else L158();
  L152():
    ARMAtoMA = ldf ARMAtoMA;
    check L154() else D39();
  L153():
    r90 = dyn base9(1.0, <lang ARMAtoMA(ar, ma, q)>);
    goto L32(r90);
  L180():
    p36 = force? p35;
    checkMissing(p36);
    r117 = `:`(p36, 1.0);
    st ind = r117;
    solve = ldf solve;
    check L181() else D52();
  D39():
    deopt 176 [];
  D52():
    deopt 232 [];
  L33(r98):
    st theta = r98;
    q8 = ld q;
    check L163() else D44();
  L154():
    p32 = prom<V +>{
      ar7 = ld ar;
      ar8 = force? ar7;
      checkMissing(ar8);
      return ar8;
    };
    p33 = prom<V +>{
      ma3 = ld ma;
      ma4 = force? ma3;
      checkMissing(ma4);
      return ma4;
    };
    p34 = prom<V +>{
      q6 = ld q;
      q7 = force? q6;
      checkMissing(q7);
      return q7;
    };
    r95 = dyn ARMAtoMA(p32, p33, p34);
    check L155() else D40();
  L157():
    ma5 = ld ma;
    check L159() else D42();
  L158():
    r97 = dyn base10(1.0, <sym ma>, <lang rep(0.0, `+`(q, 1))>);
    goto L33(r97);
  L181():
    p37 = prom<V +>{
      A8 = ld A;
      A9 = force? A8;
      checkMissing(A9);
      c27 = `is.object`(A9);
      if c27 then L1() else L2(A9);
    L0(dx29):
      return dx29;
    L1():
      dr20 = tryDispatchBuiltin.1("[", A9);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(A11):
      ind14 = ld ind;
      ind15 = force? ind14;
      ind16 = ld ind;
      ind17 = force? ind16;
      __6 = ldf `[` in base;
      r118 = dyn __6(A11, ind15, ind17);
      goto L0(r118);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx28);
    };
    p38 = prom<V +>{
      rhs = ld rhs;
      rhs1 = force? rhs;
      checkMissing(rhs1);
      return rhs1;
    };
    r121 = dyn solve(p37, p38);
    check L182() else D53();
  D40():
    deopt 180 [r95];
  D42():
    deopt 187 [ma5];
  D44():
    deopt 197 [1, 0.0, q8];
  D53():
    deopt 235 [r121];
  L155():
    c22 = ldf c in base;
    r96 = dyn c22(1.0, r95);
    check L156() else D41();
  L159():
    ma6 = force? ma5;
    checkMissing(ma6);
    sym11 = ldf rep;
    base11 = ldf rep in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L160() else L161();
  L163():
    q9 = force? q8;
    checkMissing(q9);
    r103 = `:`(0.0, q9);
    r104 = `+`(1, r103);
    s = toForSeq(r104);
    l9 = length(s);
    i = 0;
    goto L35(i);
  L182():
    st Acf = r121;
    Acf = ld Acf;
    check L183() else D54();
  D41():
    deopt 182 [r96];
  D54():
    deopt 237 [Acf];
  L34(r100):
    c23 = ldf c in base;
    r102 = dyn c23(1.0, ma6, r100);
    check L162() else D43();
  L35(i1):
    i2 = `+`.1(i1, 1);
    c24 = `<`.1(l9, i2);
    if c24 then L164() else L39();
  L156():
    goto L32(r96);
  L160():
    rep2 = ldf rep in base;
    r101 = dyn rep2(0.0, <lang `+`(q, 1)>);
    goto L34(r101);
  L161():
    r99 = dyn base11(0.0, <lang `+`(q, 1)>);
    goto L34(r99);
  L183():
    Acf1 = force? Acf;
    checkMissing(Acf1);
    c28 = `is.object`(Acf1);
    if c28 then L184() else L185(Acf1);
  D43():
    deopt 193 [r102];
  L39():
    x = `[[`(s, i2, NULL, TRUE);
    st k = x;
    sym12 = ldf sum;
    base12 = ldf sum in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L165() else L166();
  L41(dx31):
    Acf4 = ld Acf;
    check L187() else D55();
  L162():
    goto L33(r102);
  L164():
    goto L40();
  L184():
    dr22 = tryDispatchBuiltin.1("[", Acf1);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L186() else L185(dr22);
  L185(Acf3):
    __7 = ldf `[` in base;
    r122 = dyn __7(Acf3, -1);
    goto L41(r122);
  D55():
    deopt 241 [dx31, Acf4];
  L36(i7, r106):
    l10 = ld rhs;
    c26 = `is.object`(l10);
    if c26 then L175() else L176(i7, r106, l10);
  L165():
    psi = ld psi;
    check L167() else D45();
  L166():
    r105 = dyn base12(<lang `*`(psi, `[`(theta, `+`(k, `:`(0.0, q))))>);
    goto L36(i2, r105);
  L186():
    dx30 = getTryDispatchBuiltinValue(dr22);
    goto L41(dx30);
  L187():
    Acf5 = force? Acf4;
    checkMissing(Acf5);
    c29 = `is.object`(Acf5);
    if c29 then L188() else L189(dx31, Acf5);
  D45():
    deopt 203 [i2, psi];
  L38(i15, dx27):
    st rhs = dx27;
    goto L35(i15);
  L42(dx36, dx37):
    r124 = `/`(dx36, dx37);
    st Acf = r124;
    goto L43();
  L167():
    psi1 = force? psi;
    checkMissing(psi1);
    theta = ld theta;
    check L168() else D46();
  L175():
    dr18 = tryDispatchBuiltin.0("[<-", l10, r106);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L177() else L176(i7, r106, dr18);
  L176(i13, r113, l12):
    k2 = ld k;
    check L178() else D50();
  L188():
    dr24 = tryDispatchBuiltin.1("[", Acf5);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L190() else L189(dx31, dr24);
  L189(dx33, Acf7):
    __8 = ldf `[` in base;
    r123 = dyn __8(Acf7, 1);
    goto L42(dx33, r123);
  D46():
    deopt 204 [i2, psi1, theta];
  D50():
    deopt 217 [i13, r113, l12, r106, k2];
  L168():
    theta1 = force? theta;
    checkMissing(theta1);
    c25 = `is.object`(theta1);
    if c25 then L169() else L170(i2, psi1, theta1);
  L177():
    dx26 = getTryDispatchBuiltinValue(dr18);
    goto L38(i7, dx26);
  L178():
    k3 = force? k2;
    ___3 = ldf `[<-` in base;
    r116 = dyn ___3(l12, r106, k3);
    goto L38(i13, r116);
  L190():
    dx35 = getTryDispatchBuiltinValue(dr24);
    goto L42(dx31, dx35);
  L37(i11, psi5, dx25):
    r110 = `*`(psi5, dx25);
    sum = ldf sum in base;
    r111 = dyn sum(r110);
    check L174() else D49();
  L169():
    dr16 = tryDispatchBuiltin.1("[", theta1);
    dc8 = getTryDispatchBuiltinDispatched(dr16);
    if dc8 then L171() else L170(i2, psi1, dr16);
  L170(i9, psi3, theta3):
    k = ld k;
    check L172() else D47();
  D47():
    deopt 206 [i9, psi3, theta3, k];
  D49():
    deopt 215 [i11, r111];
  L171():
    dx24 = getTryDispatchBuiltinValue(dr16);
    goto L37(i2, psi1, dx24);
  L172():
    k1 = force? k;
    checkMissing(k1);
    q10 = ld q;
    check L173() else D48();
  L174():
    goto L36(i11, r111);
  D48():
    deopt 208 [i9, psi3, theta3, k1, 0.0, q10];
  L173():
    q11 = force? q10;
    checkMissing(q11);
    r107 = `:`(0.0, q11);
    r108 = `+`(k1, r107);
    __5 = ldf `[` in base;
    r109 = dyn __5(theta3, r108);
    goto L37(i9, psi3, r109);
  }
}