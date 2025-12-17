fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg arima_sim:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r7:V, reg r8:V, reg c:cls, reg r9:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r10:V, reg r11:V, reg c1:cls, reg r12:V, reg list:cls, reg r13:V, reg p1:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg r17:V, reg p2:p(V +), reg r19:V, reg arima_sim1:cls, reg sym5:cls, reg base5:cls, reg guard5:L, reg r20:V, reg r21:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r22:V, reg r23:V, reg c2:cls, reg r24:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r25:V, reg r26:V, reg c3:cls, reg r27:V, reg list1:cls, reg r28:V, reg p3:p(V +), reg r30:cls, reg p4:p(V +), reg r32:V, reg arima_sim2:cls, reg sym8:cls, reg base8:cls, reg guard8:L, reg r33:V, reg r34:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r35:V, reg r36:V, reg c4:cls, reg r37:V, reg list2:cls, reg r38:V, reg p5:p(V +), reg r40:V, reg ts_plot:cls, reg ts_sim:*, reg ts_sim1:V, reg p6:p(V +), reg r42:V |
    mkenv;
    r = clos inner3148629483;
    st `arima.sim` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0():
    arima_sim = ldf `arima.sim`;
    check L5() else D2();
  L1():
    require = ldf require;
    check L3() else D0();
  L2():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L3():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L4() else D1();
  L5():
    p1 = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L3() else L4();
    L0(r6):
      return r6;
    L3():
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L5() else L6();
    L4():
      r5 = dyn base1[ar, ma](<lang c(0.8897, `-`(0.4858))>, <lang c(`-`(0.2279), 0.2488)>);
      goto L0(r5);
    L1(r8):
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L7() else L8();
    L5():
      c = ldf c in base;
      r9 = dyn c(0.8897, -0.4858);
      goto L1(r9);
    L6():
      r7 = dyn base2(0.8897, <lang `-`(0.4858)>);
      goto L1(r7);
    L2(r11):
      list = ldf list in base;
      r13 = dyn list(r8, r11);
      goto L0(r13);
    L7():
      c1 = ldf c in base;
      r12 = dyn c1(-0.2279, 0.2488);
      goto L2(r12);
    L8():
      r10 = dyn base3(<lang `-`(0.2279)>, 0.2488);
      goto L2(r10);
    };
    p2 = prom<V +>{
      sym4 = ldf sqrt;
      base4 = ldf sqrt in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r16):
      return r16;
    L1():
      r17 = sqrt(0.1796);
      goto L0(r17);
    L2():
      r15 = dyn base4(0.1796);
      goto L0(r15);
    };
    r19 = dyn arima_sim[n, , sd](63.0, p1, p2);
    check L6() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 15 [r19];
  L4():
    goto L0();
  L6():
    arima_sim1 = ldf `arima.sim`;
    check L7() else D4();
  D4():
    deopt 17 [];
  L7():
    p3 = prom<V +>{
      sym5 = ldf list;
      base5 = ldf list in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L3() else L4();
    L0(r21):
      return r21;
    L3():
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L5() else L6();
    L4():
      r20 = dyn base5[ar, ma](<lang c(0.8897, `-`(0.4858))>, <lang c(`-`(0.2279), 0.2488)>);
      goto L0(r20);
    L1(r23):
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L7() else L8();
    L5():
      c2 = ldf c in base;
      r24 = dyn c2(0.8897, -0.4858);
      goto L1(r24);
    L6():
      r22 = dyn base6(0.8897, <lang `-`(0.4858)>);
      goto L1(r22);
    L2(r26):
      list1 = ldf list in base;
      r28 = dyn list1(r23, r26);
      goto L0(r28);
    L7():
      c3 = ldf c in base;
      r27 = dyn c3(-0.2279, 0.2488);
      goto L2(r27);
    L8():
      r25 = dyn base7(<lang `-`(0.2279)>, 0.2488);
      goto L2(r25);
    };
    p4 = prom<V +>{
      r30 = clos inner2942660460;
      return r30;
    };
    r32 = dyn arima_sim1[n, , `rand.gen`](63.0, p3, p4);
    check L8() else D5();
  D5():
    deopt 23 [r32];
  L8():
    arima_sim2 = ldf `arima.sim`;
    check L9() else D6();
  D6():
    deopt 25 [];
  L9():
    p5 = prom<V +>{
      sym8 = ldf list;
      base8 = ldf list in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r34):
      return r34;
    L2():
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r33 = dyn base8[order, ar](<lang c(1.0, 1.0, 0.0)>, 0.7);
      goto L0(r33);
    L1(r36):
      list2 = ldf list in base;
      r38 = dyn list2(r36, 0.7);
      goto L0(r38);
    L4():
      c4 = ldf c in base;
      r37 = dyn c4(1.0, 1.0, 0.0);
      goto L1(r37);
    L5():
      r35 = dyn base9(1.0, 1.0, 0.0);
      goto L1(r35);
    };
    r40 = dyn arima_sim2[, n](p5, 200.0);
    check L10() else D7();
  D7():
    deopt 29 [r40];
  L10():
    st `ts.sim` = r40;
    ts_plot = ldf `ts.plot`;
    check L11() else D8();
  D8():
    deopt 32 [];
  L11():
    p6 = prom<V +>{
      ts_sim = ld `ts.sim`;
      ts_sim1 = force? ts_sim;
      checkMissing(ts_sim1);
      return ts_sim1;
    };
    r42 = dyn ts_plot(p6);
    check L12() else D9();
  D9():
    deopt 34 [r42];
  L12():
    popenv;
    return r42;
  }
}
fun inner3148629483(model, n, `rand.gen`, innov, `n.start`, `start.innov`, `...`) {
  (reg model:*, reg n:*, reg rand_gen:*, reg innov:*, reg n_start:*, reg start_innov:*, reg ddd:dots) -+> V { var model:*, var n:*, var `rand.gen`:*, reg rand_gen_isMissing:L, reg rand_gen_orDefault:*, reg rnorm:*, reg rnorm1:V, reg p:p(V +), var innov:*, reg innov_isMissing:L, reg innov_orDefault:*, reg rand_gen1:cls, reg n1:*, reg n2:V, reg p1:p(V +), reg ddd1:*, reg r2:V, reg p2:p(V +), var `n.start`:*, reg n_start_isMissing:L, reg n_start_orDefault:*, var `start.innov`:*, reg start_innov_isMissing:L, reg start_innov_orDefault:*, reg rand_gen2:cls, reg n_start1:*, reg n_start2:V, reg p3:p(V +), reg ddd2:*, reg r5:V, reg p4:p(V +), var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg model1:*, reg model2:V, reg is_list:cls, reg r9:V, reg r10:V, reg c:L, reg stop:cls, reg r11:V, reg n3:*, reg n4:V, reg r13:V, reg c1:L, reg stop1:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r16:V, reg r17:V, reg model3:*, reg model4:V, reg c2:L, reg model6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg length:cls, reg r19:V, reg p5:*, reg p6:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r20:V, reg r21:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r26:V, reg r27:V, reg model7:*, reg model8:V, reg c4:L, reg model10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r28:V, reg r29:V, reg c5:cls, reg r30:V, reg polyroot:cls, reg r31:V, reg Mod:cls, reg r32:V, reg min:cls, reg r33:V, reg minroots:*, reg minroots1:V, reg r34:V, reg c6:L, reg stop2:cls, reg r35:V, reg r36:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r38:V, reg r39:V, reg model11:*, reg model12:V, reg c7:L, reg model14:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r40:V, reg length1:cls, reg r41:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r42:V, reg r43:V, reg n_start3:*, reg n_start4:V, reg is_na:cls, reg r44:V, reg c8:L, reg p7:*, reg p8:V, reg q:*, reg q1:V, reg r45:V, reg ifelse:cls, reg p9:*, reg p10:V, reg r46:V, reg p11:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r48:V, reg r49:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r52:V, reg r53:R, reg r54:V, reg minroots2:*, reg minroots3:V, reg r55:V, reg r56:V, reg r57:V, reg p12:p(V +), reg r59:V, reg r60:V, reg n_start5:*, reg n_start6:V, reg p13:*, reg p14:V, reg q2:*, reg q3:V, reg r62:V, reg r63:V, reg c9:L, reg stop3:cls, reg r64:V, reg sym10:cls, reg base10:cls, reg guard10:L, reg r66:V, reg r67:V, reg model15:*, reg model16:V, reg c10:L, reg model18:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r68:V, reg c11:V, reg r69:V, reg c12:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r70:V, reg r71:V, reg ord:*, reg ord1:V, reg length2:cls, reg r72:V, reg r73:V, reg c13:L, reg stop4:cls, reg r74:V, reg p15:*, reg p16:V, reg ord2:*, reg ord3:V, reg c14:L, reg p18:V, reg ord5:V, reg dr8:V, reg dc4:L, reg dx8:V, reg p20:V, reg dx9:V, reg __:cls, reg r76:V, reg r77:V, reg c15:L, reg stop5:cls, reg r78:V, reg q4:*, reg q5:V, reg ord6:*, reg ord7:V, reg c16:L, reg q7:V, reg ord9:V, reg dr10:V, reg dc5:L, reg dx10:V, reg q9:V, reg dx11:V, reg __1:cls, reg r80:V, reg r81:V, reg c17:L, reg stop6:cls, reg r82:V, reg ord10:*, reg ord11:V, reg c18:L, reg ord13:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __2:cls, reg r84:V, reg d:*, reg d1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r85:V, reg d4:V, reg r86:V, reg round:cls, reg r87:V, reg r88:V, reg c19:L, reg c20:V, reg d5:*, reg d6:V, reg r89:V, reg c22:L, reg c23:V, reg c25:L, reg stop7:cls, reg r90:V, reg r91:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r93:V, reg r94:V, reg missing:cls, reg r95:V, reg r96:V, reg c26:L, reg c28:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r97:V, reg c31:L, reg r98:V, reg start_innov1:*, reg start_innov2:V, reg length3:cls, reg r99:V, reg n_start7:*, reg n_start8:V, reg r100:V, reg c32:L, reg c33:V, reg c35:L, reg stop8:cls, reg sprintf:cls, reg ngettext:cls, reg n_start9:*, reg n_start10:V, reg p21:p(V +), reg r102:V, reg p22:p(V +), reg n_start11:*, reg n_start12:V, reg p23:p(V +), reg r105:V, reg p24:p(V +), reg r107:V, reg ts:cls, reg sym15:cls, reg base15:cls, reg guard15:L, reg r109:V, reg r110:V, reg start_innov3:*, reg start_innov4:V, reg c36:L, reg start_innov6:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r111:V, reg start_innov9:V, reg r112:V, reg n_start13:*, reg n_start14:V, reg r113:I, reg __3:cls, reg r114:V, reg innov1:*, reg innov2:V, reg c37:L, reg innov4:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg n5:*, reg n6:V, reg r115:V, reg __4:cls, reg r116:V, reg c38:cls, reg r117:V, reg p25:p(V +), reg n_start15:*, reg n_start16:V, reg r119:V, reg p26:p(V +), reg r121:V, reg sym17:cls, reg base17:cls, reg guard17:L, reg r122:V, reg r123:V, reg model19:*, reg model20:V, reg c39:L, reg model22:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r124:V, reg length4:cls, reg r125:V, reg c40:L, reg filter:cls, reg x:*, reg x1:V, reg p27:p(V +), reg sym18:cls, reg base18:cls, reg guard18:L, reg r127:V, reg r128:V, reg model23:*, reg model24:V, reg c41:L, reg model26:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r129:V, reg c42:cls, reg r130:V, reg p28:p(V +), reg r132:V, reg l:*, reg c43:L, reg r134:R, reg l2:*, reg dr22:V, reg dc11:L, reg dx22:V, reg r136:R, reg dx23:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r141:V, reg r142:R, reg l5:*, reg r143:R, reg r144:V, reg model27:*, reg model28:V, reg c44:L, reg r147:R, reg l7:*, reg r148:R, reg model30:V, reg dr24:V, reg dc12:L, reg dx24:V, reg r151:R, reg l9:*, reg r152:R, reg dx25:V, reg r153:V, reg r154:I, reg ___:cls, reg r155:V, reg sym20:cls, reg base20:cls, reg guard20:L, reg r157:V, reg r158:V, reg model31:*, reg model32:V, reg c45:L, reg model34:V, reg dr26:V, reg dc13:L, reg dx26:V, reg dx27:V, reg r159:V, reg length5:cls, reg r160:V, reg c46:L, reg filter1:cls, reg x2:*, reg x3:V, reg p29:p(V +), reg model35:*, reg model36:V, reg c47:L, reg model38:V, reg dr28:V, reg dc14:L, reg dx28:V, reg dx29:V, reg r162:V, reg p30:p(V +), reg r164:V, reg n_start17:*, reg n_start18:V, reg r166:V, reg c48:L, reg x4:*, reg x5:V, reg c49:L, reg x7:V, reg dr30:V, reg dc15:L, reg dx30:V, reg dx31:V, reg sym21:cls, reg base21:cls, reg guard21:L, reg r167:V, reg x10:V, reg r168:V, reg n_start19:*, reg n_start20:V, reg r169:I, reg r170:V, reg __5:cls, reg r171:V, reg d7:*, reg d8:V, reg r172:V, reg c50:L, reg diffinv:cls, reg x11:*, reg x12:V, reg p31:p(V +), reg d9:*, reg d10:V, reg p32:p(V +), reg r175:V, reg as_ts:cls, reg x13:*, reg x14:V, reg p33:p(V +), reg r178:V |
    mkenv;
    st model = model;
    st n = n;
    rand_gen_isMissing = missing.0(rand_gen);
    if rand_gen_isMissing then L0() else L1(rand_gen);
  L0():
    p = prom<V +>{
      rnorm = ld rnorm;
      rnorm1 = force? rnorm;
      checkMissing(rnorm1);
      return rnorm1;
    };
    goto L1(p);
  L1(rand_gen_orDefault):
    st `rand.gen` = rand_gen_orDefault;
    innov_isMissing = missing.0(innov);
    if innov_isMissing then L2() else L3(innov);
  L2():
    p2 = prom<V +>{
      rand_gen1 = ldf `rand.gen`;
      p1 = prom<V +>{
        n1 = ld n;
        n2 = force? n1;
        checkMissing(n2);
        return n2;
      };
      ddd1 = ld `...`;
      r2 = dyn rand_gen1[, `...`](p1, ddd1);
      return r2;
    };
    goto L3(p2);
  L3(innov_orDefault):
    st innov = innov_orDefault;
    n_start_isMissing = missing.0(n_start);
    if n_start_isMissing then L4(NA_LGL) else L4(n_start);
  L4(n_start_orDefault):
    st `n.start` = n_start_orDefault;
    start_innov_isMissing = missing.0(start_innov);
    if start_innov_isMissing then L5() else L6(start_innov);
  L5():
    p4 = prom<V +>{
      rand_gen2 = ldf `rand.gen`;
      p3 = prom<V +>{
        n_start1 = ld `n.start`;
        n_start2 = force? n_start1;
        checkMissing(n_start2);
        return n_start2;
      };
      ddd2 = ld `...`;
      r5 = dyn rand_gen2[, `...`](p3, ddd2);
      return r5;
    };
    goto L6(p4);
  L6(start_innov_orDefault):
    st `start.innov` = start_innov_orDefault;
    st `...` = ddd;
    sym = ldf `is.list`;
    base = ldf `is.list` in base;
    guard = `==`.4(sym, base);
    if guard then L63() else L64();
  L7(r8):
    r10 = `!`(r8);
    c = `as.logical`(r10);
    if c then L67() else L8();
  L63():
    model1 = ld model;
    check L65() else D0();
  L64():
    r7 = dyn base(<sym model>);
    goto L7(r7);
  D0():
    deopt 2 [model1];
  L8():
    goto L9();
  L9():
    n3 = ld n;
    check L71() else D4();
  L65():
    model2 = force? model1;
    checkMissing(model2);
    is_list = ldf `is.list` in base;
    r9 = dyn is_list(model2);
    check L66() else D1();
  L67():
    stop = ldf stop;
    check L68() else D2();
  D1():
    deopt 5 [r9];
  D2():
    deopt 8 [];
  D4():
    deopt 13 [n3];
  L66():
    goto L7(r9);
  L68():
    r11 = dyn stop("'model' must be list");
    check L69() else D3();
  L71():
    n4 = force? n3;
    checkMissing(n4);
    r13 = `<=`(n4, 0);
    c1 = `as.logical`(r13);
    if c1 then L72() else L10();
  D3():
    deopt 10 [r11];
  L10():
    goto L11();
  L11():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L76() else L77();
  L69():
    goto L9();
  L72():
    stop1 = ldf stop;
    check L73() else D5();
  D5():
    deopt 18 [];
  L12(r17):
    st p = r17;
    p5 = ld p;
    check L84() else D9();
  L73():
    r14 = dyn stop1("'n' must be strictly positive");
    check L74() else D6();
  L76():
    model3 = ld model;
    check L78() else D7();
  L77():
    r16 = dyn base1(<lang `$`(model, ar)>);
    goto L12(r16);
  D6():
    deopt 20 [r14];
  D7():
    deopt 25 [model3];
  D9():
    deopt 31 [p5];
  L74():
    goto L11();
  L78():
    model4 = force? model3;
    checkMissing(model4);
    c2 = `is.object`(model4);
    if c2 then L80() else L81(model4);
  L84():
    p6 = force? p5;
    checkMissing(p6);
    c3 = `as.logical`(p6);
    if c3 then L85() else L13();
  L13():
    goto L20();
  L20():
    sym6 = ldf length;
    base6 = ldf length in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L109() else L110();
  L79(dx1):
    length = ldf length in base;
    r19 = dyn length(dx1);
    check L83() else D8();
  L80():
    dr = tryDispatchBuiltin.1("$", model4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L82() else L81(dr);
  L81(model6):
    r18 = `$`(model6, <sym ar>);
    goto L79(r18);
  L85():
    sym2 = ldf min;
    base2 = ldf min in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L86() else L87();
  D8():
    deopt 29 [r19];
  L14(r21):
    st minroots = r21;
    minroots = ld minroots;
    check L103() else D15();
  L21(r39):
    st q = r39;
    sym7 = ldf `is.na`;
    base7 = ldf `is.na` in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L117() else L118();
  L82():
    dx = getTryDispatchBuiltinValue(dr);
    goto L79(dx);
  L83():
    goto L12(r19);
  L86():
    sym3 = ldf Mod;
    base3 = ldf Mod in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L88() else L89();
  L87():
    r20 = dyn base2(<lang Mod(polyroot(c(1.0, `-`(`$`(model, ar)))))>);
    goto L14(r20);
  L109():
    model11 = ld model;
    check L111() else D18();
  L110():
    r38 = dyn base6(<lang `$`(model, ma)>);
    goto L21(r38);
  D15():
    deopt 55 [minroots];
  D18():
    deopt 69 [model11];
  L15(r23):
    min = ldf min in base;
    r33 = dyn min(r23);
    check L102() else D14();
  L22(r43):
    c8 = `as.logical`(r43);
    if c8 then L121() else L23();
  L88():
    sym4 = ldf polyroot;
    base4 = ldf polyroot in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L90() else L91();
  L89():
    r22 = dyn base3(<lang polyroot(c(1.0, `-`(`$`(model, ar))))>);
    goto L15(r22);
  L103():
    minroots1 = force? minroots;
    checkMissing(minroots1);
    r34 = `<=`(minroots1, 1.0);
    c6 = `as.logical`(r34);
    if c6 then L104() else L18();
  L111():
    model12 = force? model11;
    checkMissing(model12);
    c7 = `is.object`(model12);
    if c7 then L113() else L114(model12);
  L117():
    n_start3 = ld `n.start`;
    check L119() else D20();
  L118():
    r42 = dyn base7(<sym n.start>);
    goto L22(r42);
  D14():
    deopt 53 [r33];
  D20():
    deopt 77 [n_start3];
  L16(r25):
    Mod = ldf Mod in base;
    r32 = dyn Mod(r25);
    check L101() else D13();
  L18():
    goto L19(NULL);
  L19(r36):
    goto L20();
  L23():
    goto L24();
  L24():
    n_start5 = ld `n.start`;
    check L127() else D26();
  L90():
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L92() else L93();
  L91():
    r24 = dyn base4(<lang c(1.0, `-`(`$`(model, ar)))>);
    goto L16(r24);
  L102():
    goto L14(r33);
  L104():
    stop2 = ldf stop;
    check L105() else D16();
  L112(dx5):
    length1 = ldf length in base;
    r41 = dyn length1(dx5);
    check L116() else D19();
  L113():
    dr4 = tryDispatchBuiltin.1("$", model12);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L115() else L114(dr4);
  L114(model14):
    r40 = `$`(model14, <sym ma>);
    goto L112(r40);
  L119():
    n_start4 = force? n_start3;
    checkMissing(n_start4);
    is_na = ldf `is.na` in base;
    r44 = dyn is_na(n_start4);
    check L120() else D21();
  L121():
    p7 = ld p;
    check L122() else D22();
  D13():
    deopt 51 [r32];
  D16():
    deopt 60 [];
  D19():
    deopt 73 [r41];
  D21():
    deopt 80 [r44];
  D22():
    deopt 81 [p7];
  D26():
    deopt 94 [n_start5];
  L17(r27):
    polyroot = ldf polyroot in base;
    r31 = dyn polyroot(r27);
    check L100() else D12();
  L92():
    model7 = ld model;
    check L94() else D10();
  L93():
    r26 = dyn base5(1.0, <lang `-`(`$`(model, ar))>);
    goto L17(r26);
  L101():
    goto L15(r32);
  L105():
    r35 = dyn stop2("'ar' part of model is not stationary");
    check L106() else D17();
  L115():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L112(dx4);
  L116():
    goto L21(r41);
  L120():
    goto L22(r44);
  L122():
    p8 = force? p7;
    checkMissing(p8);
    q = ld q;
    check L123() else D23();
  L127():
    n_start6 = force? n_start5;
    checkMissing(n_start6);
    p13 = ld p;
    check L128() else D27();
  D10():
    deopt 42 [model7];
  D12():
    deopt 49 [r31];
  D17():
    deopt 62 [r35];
  D23():
    deopt 82 [p8, q];
  D27():
    deopt 95 [n_start6, p13];
  L94():
    model8 = force? model7;
    checkMissing(model8);
    c4 = `is.object`(model8);
    if c4 then L96() else L97(model8);
  L100():
    goto L16(r31);
  L106():
    goto L19(r35);
  L123():
    q1 = force? q;
    checkMissing(q1);
    r45 = `+`(p8, q1);
    ifelse = ldf ifelse;
    check L124() else D24();
  L128():
    p14 = force? p13;
    checkMissing(p14);
    q2 = ld q;
    check L129() else D28();
  D24():
    deopt 85 [r45];
  D28():
    deopt 96 [n_start6, p14, q2];
  L95(dx3):
    r29 = `-`(<missing>, dx3);
    c5 = ldf c in base;
    r30 = dyn c5(1.0, r29);
    check L99() else D11();
  L96():
    dr2 = tryDispatchBuiltin.1("$", model8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L98() else L97(dr2);
  L97(model10):
    r28 = `$`(model10, <sym ar>);
    goto L95(r28);
  L124():
    p11 = prom<V +>{
      p9 = ld p;
      p10 = force? p9;
      checkMissing(p10);
      r46 = `>`(p10, 0.0);
      return r46;
    };
    p12 = prom<V +>{
      sym8 = ldf ceiling;
      base8 = ldf ceiling in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L2() else L3();
    L0(r49):
      return r49;
    L2():
      sym9 = ldf log;
      base9 = ldf log in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L4() else L5();
    L3():
      r48 = dyn base8(<lang `/`(6.0, log(minroots))>);
      goto L0(r48);
    L1(r53, r54):
      r56 = `/`(r53, r54);
      r57 = ceiling(r56);
      goto L0(r57);
    L4():
      minroots2 = ld minroots;
      minroots3 = force? minroots2;
      checkMissing(minroots3);
      r55 = log(minroots3, 2.718281828459045);
      goto L1(6.0, r55);
    L5():
      r52 = dyn base9(<sym minroots>);
      goto L1(6.0, r52);
    };
    r59 = dyn ifelse(p11, p12, 0.0);
    check L125() else D25();
  L129():
    q3 = force? q2;
    checkMissing(q3);
    r62 = `+`(p14, q3);
    r63 = `<`(n_start6, r62);
    c9 = `as.logical`(r63);
    if c9 then L130() else L25();
  D11():
    deopt 47 [r30];
  D25():
    deopt 89 [r45, r59];
  L25():
    goto L26();
  L26():
    st d = 0.0;
    sym10 = ldf `is.null`;
    base10 = ldf `is.null` in base;
    guard10 = `==`.4(sym10, base10);
    if guard10 then L134() else L135();
  L98():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L95(dx2);
  L99():
    goto L17(r30);
  L125():
    r60 = `+`(r45, r59);
    st `n.start` = r60;
    goto L24();
  L130():
    stop3 = ldf stop;
    check L131() else D29();
  D29():
    deopt 101 [];
  L27(r67):
    r69 = `!`(r67);
    c12 = `as.logical`(r69);
    if c12 then L141() else L28();
  L131():
    r64 = dyn stop3("burn-in 'n.start' must be as long as 'ar + ma'");
    check L132() else D30();
  L134():
    model15 = ld model;
    check L136() else D31();
  L135():
    r66 = dyn base10(<lang `<-`(ord, `$`(model, order))>);
    goto L27(r66);
  D30():
    deopt 103 [r64];
  D31():
    deopt 110 [model15];
  L28():
    goto L43();
  L43():
    sym13 = ldf missing;
    base13 = ldf missing in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L183() else L184();
  L132():
    goto L26();
  L136():
    model16 = force? model15;
    checkMissing(model16);
    c10 = `is.object`(model16);
    if c10 then L138() else L139(model16);
  L141():
    sym11 = ldf length;
    base11 = ldf length in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L142() else L143();
  L29(r71):
    r73 = `!=`(r71, 3);
    c13 = `as.logical`(r73);
    if c13 then L146() else L30();
  L44(r94):
    r96 = `!`(r94);
    c26 = `as.logical`(r96);
    if c26 then L185() else L45(c26);
  L137(dx7):
    st ord = dx7;
    c11 = `==`(dx7, NULL);
    goto L27(c11);
  L138():
    dr6 = tryDispatchBuiltin.1("$", model16);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L140() else L139(dr6);
  L139(model18):
    r68 = `$`(model18, <sym order>);
    goto L137(r68);
  L142():
    ord = ld ord;
    check L144() else D32();
  L143():
    r70 = dyn base11(<sym ord>);
    goto L29(r70);
  L183():
    missing = ldf missing in base;
    r95 = dyn missing(<sym start.innov>);
    goto L44(r95);
  L184():
    r93 = dyn base13(<sym start.innov>);
    goto L44(r93);
  D32():
    deopt 118 [ord];
  L30():
    goto L31();
  L31():
    p15 = ld p;
    check L150() else D36();
  L45(c28):
    c35 = `as.logical`(c28);
    if c35 then L192() else L47();
  L140():
    dx6 = getTryDispatchBuiltinValue(dr6);
    goto L137(dx6);
  L144():
    ord1 = force? ord;
    checkMissing(ord1);
    length2 = ldf length in base;
    r72 = dyn length2(ord1);
    check L145() else D33();
  L146():
    stop4 = ldf stop;
    check L147() else D34();
  L185():
    sym14 = ldf length;
    base14 = ldf length in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L186() else L187();
  D33():
    deopt 121 [r72];
  D34():
    deopt 125 [];
  D36():
    deopt 130 [p15];
  L46(c31, r98):
    n_start7 = ld `n.start`;
    check L190() else D51();
  L47():
    goto L48();
  L48():
    ts = ldf ts;
    check L196() else D54();
  L145():
    goto L29(r72);
  L147():
    r74 = dyn stop4("'model$order' must be of length 3");
    check L148() else D35();
  L150():
    p16 = force? p15;
    checkMissing(p16);
    ord2 = ld ord;
    check L151() else D37();
  L186():
    start_innov1 = ld `start.innov`;
    check L188() else D49();
  L187():
    r97 = dyn base14(<sym start.innov>);
    goto L46(c26, r97);
  L192():
    stop8 = ldf stop;
    check L193() else D52();
  D35():
    deopt 127 [r74];
  D37():
    deopt 131 [p16, ord2];
  D49():
    deopt 186 [c26, start_innov1];
  D51():
    deopt 189 [c31, r98, n_start7];
  D52():
    deopt 194 [];
  D54():
    deopt 202 [];
  L148():
    goto L31();
  L151():
    ord3 = force? ord2;
    checkMissing(ord3);
    c14 = `is.object`(ord3);
    if c14 then L152() else L153(p16, ord3);
  L188():
    start_innov2 = force? start_innov1;
    checkMissing(start_innov2);
    length3 = ldf length in base;
    r99 = dyn length3(start_innov2);
    check L189() else D50();
  L190():
    n_start8 = force? n_start7;
    checkMissing(n_start8);
    r100 = `<`(r98, n_start8);
    c32 = `as.logical`(r100);
    c33 = `&&`(c31, c32);
    goto L45(c33);
  L193():
    p24 = prom<V +>{
      sprintf = ldf sprintf;
      p22 = prom<V +>{
        ngettext = ldf ngettext;
        p21 = prom<V +>{
          n_start9 = ld `n.start`;
          n_start10 = force? n_start9;
          checkMissing(n_start10);
          return n_start10;
        };
        r102 = dyn ngettext(p21, "'start.innov' is too short: need %d point", "'start.innov' is too short: need %d points");
        return r102;
      };
      p23 = prom<V +>{
        n_start11 = ld `n.start`;
        n_start12 = force? n_start11;
        checkMissing(n_start12);
        return n_start12;
      };
      r105 = dyn sprintf(p22, p23);
      return r105;
    };
    r107 = dyn stop8[, domain](p24, NA_LGL);
    check L194() else D53();
  L196():
    p25 = prom<V +>{
      sym15 = ldf c;
      base15 = ldf c in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L4() else L5();
    L0(r110):
      return r110;
    L4():
      start_innov3 = ld `start.innov`;
      start_innov4 = force? start_innov3;
      checkMissing(start_innov4);
      c36 = `is.object`(start_innov4);
      if c36 then L6() else L7(start_innov4);
    L5():
      r109 = dyn base15(<lang `[`(start.innov, seq_len(n.start))>, <lang `[`(innov, `:`(1, n))>);
      goto L0(r109);
    L1(dx15):
      innov1 = ld innov;
      innov2 = force? innov1;
      checkMissing(innov2);
      c37 = `is.object`(innov2);
      if c37 then L11() else L12(innov2);
    L6():
      dr14 = tryDispatchBuiltin.1("[", start_innov4);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L8() else L7(dr14);
    L7(start_innov6):
      sym16 = ldf seq_len;
      base16 = ldf seq_len in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L9() else L10();
    L2(start_innov9, r112):
      __3 = ldf `[` in base;
      r114 = dyn __3(start_innov9, r112);
      goto L1(r114);
    L3(dx17):
      c38 = ldf c in base;
      r117 = dyn c38(dx15, dx17);
      goto L0(r117);
    L8():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L1(dx14);
    L9():
      n_start13 = ld `n.start`;
      n_start14 = force? n_start13;
      checkMissing(n_start14);
      r113 = seq_len(n_start14);
      goto L2(start_innov6, r113);
    L10():
      r111 = dyn base16(<sym n.start>);
      goto L2(start_innov6, r111);
    L11():
      dr16 = tryDispatchBuiltin.1("[", innov2);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L13() else L12(dr16);
    L12(innov4):
      n5 = ld n;
      n6 = force? n5;
      checkMissing(n6);
      r115 = `:`(1, n6);
      __4 = ldf `[` in base;
      r116 = dyn __4(innov4, r115);
      goto L3(r116);
    L13():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L3(dx16);
    };
    p26 = prom<V +>{
      n_start15 = ld `n.start`;
      n_start16 = force? n_start15;
      checkMissing(n_start16);
      r119 = `-`(1.0, n_start16);
      return r119;
    };
    r121 = dyn ts[, start](p25, p26);
    check L197() else D55();
  D50():
    deopt 189 [c26, r99];
  D53():
    deopt 198 [r107];
  D55():
    deopt 206 [r121];
  L32(p20, dx9):
    r77 = `!=`(p20, dx9);
    c15 = `as.logical`(r77);
    if c15 then L155() else L33();
  L152():
    dr8 = tryDispatchBuiltin.1("[", ord3);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L154() else L153(p16, dr8);
  L153(p18, ord5):
    __ = ldf `[` in base;
    r76 = dyn __(ord5, 1);
    goto L32(p18, r76);
  L189():
    goto L46(c26, r99);
  L194():
    goto L48();
  L197():
    st x = r121;
    sym17 = ldf length;
    base17 = ldf length in base;
    guard17 = `==`.4(sym17, base17);
    if guard17 then L198() else L199();
  L33():
    goto L34();
  L34():
    q4 = ld q;
    check L159() else D40();
  L49(r123):
    c40 = `as.logical`(r123);
    if c40 then L206() else L50();
  L154():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L32(p16, dx8);
  L155():
    stop5 = ldf stop;
    check L156() else D38();
  L198():
    model19 = ld model;
    check L200() else D56();
  L199():
    r122 = dyn base17(<lang `$`(model, ma)>);
    goto L49(r122);
  D38():
    deopt 138 [];
  D40():
    deopt 143 [q4];
  D56():
    deopt 210 [model19];
  L50():
    goto L53();
  L53():
    sym20 = ldf length;
    base20 = ldf length in base;
    guard20 = `==`.4(sym20, base20);
    if guard20 then L220() else L221();
  L156():
    r78 = dyn stop5("inconsistent specification of 'ar' order");
    check L157() else D39();
  L159():
    q5 = force? q4;
    checkMissing(q5);
    ord6 = ld ord;
    check L160() else D41();
  L200():
    model20 = force? model19;
    checkMissing(model20);
    c39 = `is.object`(model20);
    if c39 then L202() else L203(model20);
  L206():
    filter = ldf filter;
    check L207() else D58();
  D39():
    deopt 140 [r78];
  D41():
    deopt 144 [q5, ord6];
  D58():
    deopt 216 [];
  L54(r158):
    c46 = `as.logical`(r158);
    if c46 then L228() else L55();
  L157():
    goto L34();
  L160():
    ord7 = force? ord6;
    checkMissing(ord7);
    c16 = `is.object`(ord7);
    if c16 then L161() else L162(q5, ord7);
  L201(dx19):
    length4 = ldf length in base;
    r125 = dyn length4(dx19);
    check L205() else D57();
  L202():
    dr18 = tryDispatchBuiltin.1("$", model20);
    dc9 = getTryDispatchBuiltinDispatched(dr18);
    if dc9 then L204() else L203(dr18);
  L203(model22):
    r124 = `$`(model22, <sym ma>);
    goto L201(r124);
  L207():
    p27 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p28 = prom<V +>{
      sym18 = ldf c;
      base18 = ldf c in base;
      guard18 = `==`.4(sym18, base18);
      if guard18 then L1() else L2();
    L0(r128):
      return r128;
    L1():
      model23 = ld model;
      model24 = force? model23;
      checkMissing(model24);
      c41 = `is.object`(model24);
      if c41 then L4() else L5(model24);
    L2():
      r127 = dyn base18(1.0, <lang `$`(model, ma)>);
      goto L0(r127);
    L3(dx21):
      c42 = ldf c in base;
      r130 = dyn c42(1.0, dx21);
      goto L0(r130);
    L4():
      dr20 = tryDispatchBuiltin.1("$", model24);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L6() else L5(dr20);
    L5(model26):
      r129 = `$`(model26, <sym ma>);
      goto L3(r129);
    L6():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L3(dx20);
    };
    r132 = dyn filter[, , sides](p27, p28, 1);
    check L208() else D59();
  L220():
    model31 = ld model;
    check L222() else D61();
  L221():
    r157 = dyn base20(<lang `$`(model, ar)>);
    goto L54(r157);
  D57():
    deopt 214 [r125];
  D59():
    deopt 221 [r132];
  D61():
    deopt 237 [model31];
  L35(q9, dx11):
    r81 = `!=`(q9, dx11);
    c17 = `as.logical`(r81);
    if c17 then L164() else L36();
  L55():
    goto L56();
  L56():
    n_start17 = ld `n.start`;
    check L232() else D65();
  L161():
    dr10 = tryDispatchBuiltin.1("[", ord7);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L163() else L162(q5, dr10);
  L162(q7, ord9):
    __1 = ldf `[` in base;
    r80 = dyn __1(ord9, 3);
    goto L35(q7, r80);
  L204():
    dx18 = getTryDispatchBuiltinValue(dr18);
    goto L201(dx18);
  L205():
    goto L49(r125);
  L208():
    st x = r132;
    l = ld x;
    c43 = `is.object`(l);
    if c43 then L209() else L210(0.0, l);
  L222():
    model32 = force? model31;
    checkMissing(model32);
    c45 = `is.object`(model32);
    if c45 then L224() else L225(model32);
  L228():
    filter1 = ldf filter;
    check L229() else D63();
  D63():
    deopt 243 [];
  D65():
    deopt 252 [n_start17];
  L36():
    goto L37();
  L37():
    ord10 = ld ord;
    check L168() else D44();
  L51(r136, dx23):
    st x = dx23;
    goto L53();
  L163():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L35(q5, dx10);
  L164():
    stop6 = ldf stop;
    check L165() else D42();
  L209():
    dr22 = tryDispatchBuiltin.0("[<-", l, 0.0);
    dc11 = getTryDispatchBuiltinDispatched(dr22);
    if dc11 then L211() else L210(0.0, dr22);
  L210(r134, l2):
    sym19 = ldf seq_along;
    base19 = ldf seq_along in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L212() else L213();
  L223(dx27):
    length5 = ldf length in base;
    r160 = dyn length5(dx27);
    check L227() else D62();
  L224():
    dr26 = tryDispatchBuiltin.1("$", model32);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L226() else L225(dr26);
  L225(model34):
    r159 = `$`(model34, <sym ar>);
    goto L223(r159);
  L229():
    p29 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      return x3;
    };
    p30 = prom<V +>{
      model35 = ld model;
      model36 = force? model35;
      checkMissing(model36);
      c47 = `is.object`(model36);
      if c47 then L1() else L2(model36);
    L0(dx29):
      return dx29;
    L1():
      dr28 = tryDispatchBuiltin.1("$", model36);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(model38):
      r162 = `$`(model38, <sym ar>);
      goto L0(r162);
    L3():
      dx28 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx28);
    };
    r164 = dyn filter1[, , method](p29, p30, "recursive");
    check L230() else D64();
  L232():
    n_start18 = force? n_start17;
    checkMissing(n_start18);
    r166 = `>`(n_start18, 0.0);
    c48 = `as.logical`(r166);
    if c48 then L233() else L57();
  D42():
    deopt 151 [];
  D44():
    deopt 156 [ord10];
  D62():
    deopt 241 [r160];
  D64():
    deopt 248 [r164];
  L52(r142, l5, r143, r144):
    ___ = ldf `[<-` in base;
    r155 = dyn ___(l5, r143, r144);
    goto L51(r142, r155);
  L57():
    goto L60();
  L60():
    d7 = ld d;
    check L242() else D68();
  L165():
    r82 = dyn stop6("inconsistent specification of 'ma' order");
    check L166() else D43();
  L168():
    ord11 = force? ord10;
    checkMissing(ord11);
    c18 = `is.object`(ord11);
    if c18 then L169() else L170(ord11);
  L211():
    dx22 = getTryDispatchBuiltinValue(dr22);
    goto L51(0.0, dx22);
  L212():
    model27 = ld model;
    check L214() else D60();
  L213():
    r141 = dyn base19(<lang `$`(model, ma)>);
    goto L52(r134, l2, 0.0, r141);
  L226():
    dx26 = getTryDispatchBuiltinValue(dr26);
    goto L223(dx26);
  L227():
    goto L54(r160);
  L230():
    st x = r164;
    goto L56();
  L233():
    x4 = ld x;
    check L234() else D66();
  D43():
    deopt 153 [r82];
  D60():
    deopt 227 [r134, l2, 0.0, model27];
  D66():
    deopt 256 [x4];
  D68():
    deopt 267 [d7];
  L38(dx13):
    st d = dx13;
    d = ld d;
    check L172() else D45();
  L166():
    goto L37();
  L169():
    dr12 = tryDispatchBuiltin.1("[", ord11);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L171() else L170(dr12);
  L170(ord13):
    __2 = ldf `[` in base;
    r84 = dyn __2(ord13, 2);
    goto L38(r84);
  L214():
    model28 = force? model27;
    checkMissing(model28);
    c44 = `is.object`(model28);
    if c44 then L216() else L217(r134, l2, 0.0, model28);
  L234():
    x5 = force? x4;
    checkMissing(x5);
    c49 = `is.object`(x5);
    if c49 then L235() else L236(x5);
  L242():
    d8 = force? d7;
    checkMissing(d8);
    r172 = `>`(d8, 0.0);
    c50 = `as.logical`(r172);
    if c50 then L243() else L61();
  D45():
    deopt 162 [d];
  L58(dx31):
    st x = dx31;
    goto L60();
  L61():
    goto L62();
  L62():
    as_ts = ldf `as.ts`;
    check L247() else D71();
  L171():
    dx12 = getTryDispatchBuiltinValue(dr12);
    goto L38(dx12);
  L172():
    d1 = force? d;
    checkMissing(d1);
    sym12 = ldf round;
    base12 = ldf round in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L173() else L174();
  L215(r151, l9, r152, dx25):
    r154 = seq_along(dx25);
    goto L52(r151, l9, r152, r154);
  L216():
    dr24 = tryDispatchBuiltin.1("$", model28);
    dc12 = getTryDispatchBuiltinDispatched(dr24);
    if dc12 then L218() else L217(r134, l2, 0.0, dr24);
  L217(r147, l7, r148, model30):
    r153 = `$`(model30, <sym ma>);
    goto L215(r147, l7, r148, r153);
  L235():
    dr30 = tryDispatchBuiltin.1("[", x5);
    dc15 = getTryDispatchBuiltinDispatched(dr30);
    if dc15 then L237() else L236(dr30);
  L236(x7):
    sym21 = ldf seq_len;
    base21 = ldf seq_len in base;
    guard21 = `==`.4(sym21, base21);
    if guard21 then L238() else L239();
  L243():
    diffinv = ldf diffinv;
    check L244() else D69();
  D69():
    deopt 272 [];
  D71():
    deopt 281 [];
  L39(d4, r86):
    r88 = `!=`(d4, r86);
    c19 = `as.logical`(r88);
    if c19 then L40(c19) else L175();
  L59(x10, r168):
    r170 = `-`(<missing>, r168);
    __5 = ldf `[` in base;
    r171 = dyn __5(x10, r170);
    goto L58(r171);
  L173():
    round = ldf round in base;
    r87 = dyn round(<sym d>);
    goto L39(d1, r87);
  L174():
    r85 = dyn base12(<sym d>);
    goto L39(d1, r85);
  L218():
    dx24 = getTryDispatchBuiltinValue(dr24);
    goto L215(r134, l2, 0.0, dx24);
  L237():
    dx30 = getTryDispatchBuiltinValue(dr30);
    goto L58(dx30);
  L238():
    n_start19 = ld `n.start`;
    check L240() else D67();
  L239():
    r167 = dyn base21(<sym n.start>);
    goto L59(x7, r167);
  L244():
    p31 = prom<V +>{
      x11 = ld x;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    p32 = prom<V +>{
      d9 = ld d;
      d10 = force? d9;
      checkMissing(d10);
      return d10;
    };
    r175 = dyn diffinv[, differences](p31, p32);
    check L245() else D70();
  L247():
    p33 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      return x14;
    };
    r178 = dyn as_ts(p33);
    check L248() else D72();
  D67():
    deopt 259 [x7, n_start19];
  D70():
    deopt 276 [r175];
  D72():
    deopt 283 [r178];
  L40(c20):
    c25 = `as.logical`(c20);
    if c25 then L178() else L41();
  L175():
    d5 = ld d;
    check L176() else D46();
  L240():
    n_start20 = force? n_start19;
    checkMissing(n_start20);
    r169 = seq_len(n_start20);
    goto L59(x7, r169);
  L245():
    st x = r175;
    goto L62();
  L248():
    popenv;
    return r178;
  D46():
    deopt 167 [c19, d5];
  L41():
    goto L42(NULL);
  L42(r91):
    goto L43();
  L176():
    d6 = force? d5;
    checkMissing(d6);
    r89 = `<`(d6, 0.0);
    c22 = `as.logical`(r89);
    c23 = `||`(c19, c22);
    goto L40(c23);
  L178():
    stop7 = ldf stop;
    check L179() else D47();
  D47():
    deopt 173 [];
  L179():
    r90 = dyn stop7("number of differences must be a positive integer");
    check L180() else D48();
  D48():
    deopt 175 [r90];
  L180():
    goto L42(r90);
  }
}
fun inner2942660460(n, `...`) {
  (reg n:*, reg ddd:dots) -+> V { var n:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg r2:V, reg rt:cls, reg n1:*, reg n2:V, reg p:p(V +), reg r4:V, reg r5:V |
    mkenv;
    st n = n;
    st `...` = ddd;
    sym = ldf sqrt;
    base = ldf sqrt in base;
    guard = `==`.4(sym, base);
    if guard then L1() else L2();
  L0(r1):
    rt = ldf rt;
    check L3() else D0();
  L1():
    r2 = sqrt(0.1796);
    goto L0(r2);
  L2():
    r = dyn base(0.1796);
    goto L0(r);
  D0():
    deopt 4 [r1];
  L3():
    p = prom<V +>{
      n1 = ld n;
      n2 = force? n1;
      checkMissing(n2);
      return n2;
    };
    r4 = dyn rt[, df](p, 5.0);
    check L4() else D1();
  D1():
    deopt 8 [r1, r4];
  L4():
    r5 = `*`(r1, r4);
    popenv;
    return r5;
  }
}