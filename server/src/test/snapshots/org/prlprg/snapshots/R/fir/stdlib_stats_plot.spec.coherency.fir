fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner903294394;
    st `plot.spec.coherency` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner903294394(x, ci, xlab, ylab, ylim, type, main, `ci.col`, `ci.lty`, `...`) {
  (reg x:*, reg ci:*, reg xlab:*, reg ylab:*, reg ylim:*, reg type:*, reg main:*, reg ci_col:*, reg ci_lty:*, reg ddd:dots) -+> V { var x:*, var ci:*, reg ci_isMissing:L, reg ci_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var `ci.col`:*, reg ci_col_isMissing:L, reg ci_col_orDefault:*, var `ci.lty`:*, reg ci_lty_isMissing:L, reg ci_lty_orDefault:*, var `...`:dots?, reg NCOL:cls, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg x5:*, reg x6:V, reg c2:L, reg r8:R, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r10:R, reg dx3:V, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg gg:*, reg gg1:V, reg r15:V, reg r16:V, reg qnorm:cls, reg ci1:*, reg ci2:V, reg r17:V, reg r18:V, reg p2:p(V +), reg r20:V, reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg main1:*, reg main2:V, reg c3:V, reg c4:L, reg paste:cls, reg paste1:cls, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r24:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg r28:V, reg nser:*, reg nser1:V, reg r30:V, reg c6:L, reg plot:cls, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r31:V, reg p5:p(V +), reg x17:*, reg x18:V, reg c8:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r33:V, reg p6:p(V +), reg type1:*, reg type2:V, reg p7:p(V +), reg xlab1:*, reg xlab2:V, reg p8:p(V +), reg ylab1:*, reg ylab2:V, reg p9:p(V +), reg ylim1:*, reg ylim2:V, reg p10:p(V +), reg ddd1:dots?, reg r39:V, reg pmin:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r40:V, reg r41:V, reg x21:*, reg x22:V, reg c9:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r42:V, reg r43:V, reg p11:p(V +), reg r45:V, reg lines:cls, reg x25:*, reg x26:V, reg c10:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r46:V, reg p12:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r48:V, reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg coh:*, reg coh1:V, reg r52:V, reg z:*, reg z1:V, reg se:*, reg se1:V, reg r53:V, reg r54:V, reg r55:V, reg r56:V, reg p13:p(V +), reg ci_lty1:*, reg ci_lty2:V, reg p14:p(V +), reg ci_col1:*, reg ci_col2:V, reg p15:p(V +), reg r60:V, reg lines1:cls, reg x29:*, reg x30:V, reg c11:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r61:V, reg p16:p(V +), reg pmax:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r63:V, reg r64:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r65:V, reg r66:V, reg coh2:*, reg coh3:V, reg r67:V, reg z2:*, reg z3:V, reg se2:*, reg se3:V, reg r68:V, reg r69:V, reg r70:V, reg p17:p(V +), reg r72:V, reg r73:V, reg p18:p(V +), reg ci_lty3:*, reg ci_lty4:V, reg p19:p(V +), reg ci_col3:*, reg ci_col4:V, reg p20:p(V +), reg r77:V, reg title:cls, reg main3:*, reg main4:V, reg p21:p(V +), reg r79:V, reg dev_hold:cls, reg r81:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r82:V, reg on_exit:cls, reg r84:V, reg par:cls, reg sym9:cls, reg base9:cls, reg guard9:L, reg r85:V, reg r86:V, reg nser2:*, reg nser3:V, reg r87:V, reg nser4:*, reg nser5:V, reg r88:V, reg c12:cls, reg r89:V, reg p22:p(V +), reg sym10:cls, reg base10:cls, reg guard10:L, reg r91:V, reg r92:V, reg c13:cls, reg r93:V, reg p23:p(V +), reg sym11:cls, reg base11:cls, reg guard11:L, reg r95:V, reg r96:V, reg c14:cls, reg r97:V, reg p24:p(V +), reg r99:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r100:V, reg on_exit1:cls, reg r102:V, reg plot_new:cls, reg r103:V, reg nser6:*, reg nser7:V, reg r104:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c15:L, reg x33:V, reg j:*, reg j1:V, reg r105:V, reg r106:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c16:L, reg x34:V, reg par1:cls, reg sym13:cls, reg base13:cls, reg guard13:L, reg r107:V, reg r108:V, reg j2:*, reg j3:V, reg r109:V, reg i13:*, reg i14:V, reg nser8:*, reg nser9:V, reg r110:V, reg nser10:*, reg nser11:V, reg r111:V, reg c17:cls, reg r112:V, reg p25:p(V +), reg r114:V, reg i15:*, reg i16:V, reg j4:*, reg j5:V, reg r115:V, reg j6:*, reg j7:V, reg r116:V, reg r117:V, reg r118:V, reg r119:V, reg plot1:cls, reg x35:*, reg x36:V, reg c18:L, reg x38:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r120:V, reg p26:p(V +), reg x39:*, reg x40:V, reg c19:L, reg x42:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r122:V, reg c20:L, reg dr20:V, reg dc10:L, reg dx22:V, reg dx23:V, reg ind:*, reg ind1:V, reg __:cls, reg r123:V, reg p27:p(V +), reg type3:*, reg type4:V, reg p28:p(V +), reg ylim3:*, reg ylim4:V, reg p29:p(V +), reg ddd2:dots?, reg r127:V, reg pmin1:cls, reg sym14:cls, reg base14:cls, reg guard14:L, reg r128:V, reg r129:V, reg x43:*, reg x44:V, reg c21:L, reg x46:V, reg dr22:V, reg dc11:L, reg dx24:V, reg dx25:V, reg r130:V, reg c22:L, reg dr24:V, reg dc12:L, reg dx28:V, reg dx29:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r131:V, reg r132:V, reg p30:p(V +), reg r134:V, reg lines2:cls, reg x47:*, reg x48:V, reg c23:L, reg x50:V, reg dr26:V, reg dc13:L, reg dx30:V, reg dx31:V, reg r135:V, reg p31:p(V +), reg sym15:cls, reg base15:cls, reg guard15:L, reg r137:V, reg r138:V, reg sym16:cls, reg base16:cls, reg guard16:L, reg r139:V, reg r140:V, reg coh4:*, reg coh5:V, reg r141:V, reg z4:*, reg z5:V, reg se4:*, reg se5:V, reg r142:V, reg r143:V, reg r144:V, reg r145:V, reg p32:p(V +), reg ci_lty5:*, reg ci_lty6:V, reg p33:p(V +), reg ci_col5:*, reg ci_col6:V, reg p34:p(V +), reg r149:V, reg lines3:cls, reg x51:*, reg x52:V, reg c24:L, reg x54:V, reg dr28:V, reg dc14:L, reg dx32:V, reg dx33:V, reg r150:V, reg p35:p(V +), reg pmax1:cls, reg sym17:cls, reg base17:cls, reg guard17:L, reg r152:V, reg r153:V, reg sym18:cls, reg base18:cls, reg guard18:L, reg r154:V, reg r155:V, reg coh6:*, reg coh7:V, reg r156:V, reg z6:*, reg z7:V, reg se6:*, reg se7:V, reg r157:V, reg r158:V, reg r159:V, reg p36:p(V +), reg r161:V, reg r162:V, reg p37:p(V +), reg ci_lty7:*, reg ci_lty8:V, reg p38:p(V +), reg ci_col7:*, reg ci_col8:V, reg p39:p(V +), reg r166:V, reg box:cls, reg r167:V, reg i17:*, reg i18:V, reg r168:V, reg c25:L, reg axis:cls, reg r169:V, reg title1:cls, reg x55:*, reg x56:V, reg c26:L, reg x58:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r170:V, reg c27:L, reg dx37:V, reg dr32:V, reg dc16:L, reg dx38:V, reg dx39:V, reg j8:*, reg j9:V, reg __2:cls, reg r171:V, reg p40:p(V +), reg r173:V, reg i23:I, reg i24:I, reg j10:*, reg j11:V, reg nser12:*, reg nser13:V, reg r175:V, reg c28:L, reg axis1:cls, reg r176:V, reg title2:cls, reg x59:*, reg x60:V, reg c29:L, reg x62:V, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg r177:V, reg c30:L, reg dx43:V, reg dr36:V, reg dc18:L, reg dx44:V, reg dx45:V, reg i29:*, reg i30:V, reg __3:cls, reg r178:V, reg p41:p(V +), reg r180:V, reg i31:I, reg i32:I, reg mtext:cls, reg main5:*, reg main6:V, reg p42:p(V +), reg par2:cls, reg r183:V, reg p43:p(V +), reg par3:cls, reg r185:V, reg p44:p(V +), reg r187:V, reg sym19:cls, reg base19:cls, reg guard19:L, reg r188:V, reg r189:V, reg invisible:cls, reg r190:V |
    mkenv;
    st x = x;
    ci_isMissing = missing.0(ci);
    if ci_isMissing then L0(0.95) else L0(ci);
  L0(ci_orDefault):
    st ci = ci_orDefault;
    xlab_isMissing = missing.0(xlab);
    if xlab_isMissing then L1("frequency") else L1(xlab);
  L1(xlab_orDefault):
    st xlab = xlab_orDefault;
    ylab_isMissing = missing.0(ylab);
    if ylab_isMissing then L2("squared coherency") else L2(ylab);
  L2(ylab_orDefault):
    st ylab = ylab_orDefault;
    ylim_isMissing = missing.0(ylim);
    if ylim_isMissing then L3() else L4(ylim);
  L3():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c(0.0, 1.0);
      goto L0(r2);
    L2():
      r = dyn base(0.0, 1.0);
      goto L0(r);
    };
    goto L4(p);
  L4(ylim_orDefault):
    st ylim = ylim_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L5("l") else L5(type);
  L5(type_orDefault):
    st type = type_orDefault;
    main_isMissing = missing.0(main);
    if main_isMissing then L6(NULL) else L6(main);
  L6(main_orDefault):
    st main = main_orDefault;
    ci_col_isMissing = missing.0(ci_col);
    if ci_col_isMissing then L7("blue") else L7(ci_col);
  L7(ci_col_orDefault):
    st `ci.col` = ci_col_orDefault;
    ci_lty_isMissing = missing.0(ci_lty);
    if ci_lty_isMissing then L8(3.0) else L8(ci_lty);
  L8(ci_lty_orDefault):
    st `ci.lty` = ci_lty_orDefault;
    st `...` = ddd;
    NCOL = ldf NCOL;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c1 = `is.object`(x2);
      if c1 then L1() else L2(x2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", x2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(x4):
      r4 = `$`(x4, <sym spec>);
      goto L0(r4);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r6 = dyn NCOL(p1);
    check L27() else D1();
  D1():
    deopt 3 [r6];
  L27():
    st nser = r6;
    x5 = ld x;
    check L28() else D2();
  D2():
    deopt 6 [2.0, x5];
  L28():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L30() else L31(2.0, x6);
  L29(r10, dx3):
    r12 = `/`(r10, dx3);
    st gg = r12;
    sym1 = ldf sqrt;
    base1 = ldf sqrt in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L33() else L34();
  L30():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L32() else L31(2.0, dr2);
  L31(r8, x8):
    r11 = `$`(x8, <sym df>);
    goto L29(r8, r11);
  L9(r14):
    st se = r14;
    qnorm = ldf qnorm;
    check L36() else D4();
  L32():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L29(2.0, dx2);
  L33():
    gg = ld gg;
    check L35() else D3();
  L34():
    r13 = dyn base1(<lang `/`(gg, 2.0)>);
    goto L9(r13);
  D3():
    deopt 12 [gg];
  D4():
    deopt 19 [];
  L35():
    gg1 = force? gg;
    checkMissing(gg1);
    r15 = `/`(gg1, 2.0);
    r16 = sqrt(r15);
    goto L9(r16);
  L36():
    p2 = prom<V +>{
      ci1 = ld ci;
      ci2 = force? ci1;
      checkMissing(ci2);
      r17 = `-`(1.0, ci2);
      r18 = `/`(r17, 2.0);
      return r18;
    };
    r20 = dyn qnorm(p2);
    check L37() else D5();
  D5():
    deopt 21 [r20];
  L37():
    r21 = `-`(<missing>, r20);
    st z = r21;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L38() else L39();
  L10(r23):
    c4 = `as.logical`(r23);
    if c4 then L41() else L11();
  L38():
    main1 = ld main;
    check L40() else D6();
  L39():
    r22 = dyn base2(<sym main>);
    goto L10(r22);
  D6():
    deopt 25 [main1];
  L11():
    goto L12();
  L12():
    nser = ld nser;
    check L45() else D9();
  L40():
    main2 = force? main1;
    checkMissing(main2);
    c3 = `==`(main2, NULL);
    goto L10(c3);
  L41():
    paste = ldf paste;
    check L42() else D7();
  D7():
    deopt 29 [];
  D9():
    deopt 38 [nser];
  L42():
    p4 = prom<V +>{
      paste1 = ldf paste;
      p3 = prom<V +>{
        x9 = ld x;
        x10 = force? x9;
        checkMissing(x10);
        c5 = `is.object`(x10);
        if c5 then L1() else L2(x10);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", x10);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(x12):
        r24 = `$`(x12, <sym series>);
        goto L0(r24);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r26 = dyn paste1("Series:", p3);
      return r26;
    };
    r28 = dyn paste[, , sep](p4, "Squared Coherency", " --  ");
    check L43() else D8();
  L45():
    nser1 = force? nser;
    checkMissing(nser1);
    r30 = `==`(nser1, 2.0);
    c6 = `as.logical`(r30);
    if c6 then L46() else L13();
  D8():
    deopt 34 [r28];
  L13():
    dev_hold = ldf `dev.hold`;
    check L58() else D20();
  L14():
    sym19 = ldf invisible;
    base19 = ldf invisible in base;
    guard19 = `==`.4(sym19, base19);
    if guard19 then L104() else L105();
  L43():
    st main = r28;
    goto L12();
  L46():
    plot = ldf plot;
    check L47() else D10();
  D10():
    deopt 43 [];
  D20():
    deopt 85 [];
  L25(r189):
    popenv;
    return r189;
  L47():
    p5 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c7 = `is.object`(x14);
      if c7 then L1() else L2(x14);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("$", x14);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x16):
      r31 = `$`(x16, <sym freq>);
      goto L0(r31);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p6 = prom<V +>{
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c8 = `is.object`(x18);
      if c8 then L1() else L2(x18);
    L0(dx9):
      return dx9;
    L1():
      dr8 = tryDispatchBuiltin.1("$", x18);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L3() else L2(dr8);
    L2(x20):
      r33 = `$`(x20, <sym coh>);
      goto L0(r33);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p7 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p8 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p9 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p10 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    ddd1 = ld `...`;
    r39 = dyn plot[, , type, xlab, ylab, ylim, `...`](p5, p6, p7, p8, p9, p10, ddd1);
    check L48() else D11();
  L58():
    r81 = dyn dev_hold();
    check L59() else D21();
  L104():
    invisible = ldf invisible in base;
    r190 = dyn invisible();
    check L106() else D56();
  L105():
    r188 = dyn base19();
    goto L25(r188);
  D11():
    deopt 55 [r39];
  D21():
    deopt 86 [r81];
  D56():
    deopt 236 [r190];
  L48():
    pmin = ldf pmin;
    check L49() else D12();
  L59():
    sym8 = ldf `on.exit`;
    base8 = ldf `on.exit` in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L60() else L61();
  L106():
    goto L25(r190);
  D12():
    deopt 57 [];
  L15():
    par = ldf par;
    check L62() else D22();
  L49():
    p11 = prom<V +>{
      sym3 = ldf sqrt;
      base3 = ldf sqrt in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r41):
      return r41;
    L1():
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c9 = `is.object`(x22);
      if c9 then L4() else L5(x22);
    L2():
      r40 = dyn base3(<lang `$`(x, coh)>);
      goto L0(r40);
    L3(dx11):
      r43 = sqrt(dx11);
      goto L0(r43);
    L4():
      dr10 = tryDispatchBuiltin.1("$", x22);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L6() else L5(dr10);
    L5(x24):
      r42 = `$`(x24, <sym coh>);
      goto L3(r42);
    L6():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L3(dx10);
    };
    r45 = dyn pmin(0.99999, p11);
    check L50() else D13();
  L60():
    on_exit = ldf `on.exit` in base;
    r84 = dyn on_exit(<lang dev.flush()>);
    goto L15();
  L61():
    r82 = dyn base8(<lang dev.flush()>);
    goto L15();
  D13():
    deopt 60 [r45];
  D22():
    deopt 91 [];
  L50():
    st coh = r45;
    lines = ldf lines;
    check L51() else D14();
  L62():
    p22 = prom<V +>{
      sym9 = ldf c;
      base9 = ldf c in base;
      guard9 = `==`.4(sym9, base9);
      if guard9 then L1() else L2();
    L0(r86):
      return r86;
    L1():
      nser2 = ld nser;
      nser3 = force? nser2;
      checkMissing(nser3);
      r87 = `-`(nser3, 1.0);
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      r88 = `-`(nser5, 1.0);
      c12 = ldf c in base;
      r89 = dyn c12(r87, r88);
      goto L0(r89);
    L2():
      r85 = dyn base9(<lang `-`(nser, 1.0)>, <lang `-`(nser, 1.0)>);
      goto L0(r85);
    };
    p23 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c13 = ldf c in base;
      r93 = dyn c13(1.5, 1.5, 0.5, 0.5);
      goto L0(r93);
    L2():
      r91 = dyn base10(1.5, 1.5, 0.5, 0.5);
      goto L0(r91);
    };
    p24 = prom<V +>{
      sym11 = ldf c;
      base11 = ldf c in base;
      guard11 = `==`.4(sym11, base11);
      if guard11 then L1() else L2();
    L0(r96):
      return r96;
    L1():
      c14 = ldf c in base;
      r97 = dyn c14(4.0, 4.0, 6.0, 4.0);
      goto L0(r97);
    L2():
      r95 = dyn base11(4.0, 4.0, 6.0, 4.0);
      goto L0(r95);
    };
    r99 = dyn par[mfrow, mar, oma](p22, p23, p24);
    check L63() else D23();
  D14():
    deopt 63 [];
  D23():
    deopt 98 [r99];
  L51():
    p12 = prom<V +>{
      x25 = ld x;
      x26 = force? x25;
      checkMissing(x26);
      c10 = `is.object`(x26);
      if c10 then L1() else L2(x26);
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("$", x26);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(x28):
      r46 = `$`(x28, <sym freq>);
      goto L0(r46);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p13 = prom<V +>{
      sym4 = ldf tanh;
      base4 = ldf tanh in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L2() else L3();
    L0(r49):
      r56 = `^`(r49, 2.0);
      return r56;
    L2():
      sym5 = ldf atanh;
      base5 = ldf atanh in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L4() else L5();
    L3():
      r48 = dyn base4(<lang `+`(atanh(coh), `*`(z, se))>);
      goto L0(r48);
    L1(r51):
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      se = ld se;
      se1 = force? se;
      checkMissing(se1);
      r53 = `*`(z1, se1);
      r54 = `+`(r51, r53);
      r55 = tanh(r54);
      goto L0(r55);
    L4():
      coh = ld coh;
      coh1 = force? coh;
      checkMissing(coh1);
      r52 = atanh(coh1);
      goto L1(r52);
    L5():
      r50 = dyn base5(<sym coh>);
      goto L1(r50);
    };
    p14 = prom<V +>{
      ci_lty1 = ld `ci.lty`;
      ci_lty2 = force? ci_lty1;
      checkMissing(ci_lty2);
      return ci_lty2;
    };
    p15 = prom<V +>{
      ci_col1 = ld `ci.col`;
      ci_col2 = force? ci_col1;
      checkMissing(ci_col2);
      return ci_col2;
    };
    r60 = dyn lines[, , lty, col](p12, p13, p14, p15);
    check L52() else D15();
  L63():
    st opar = r99;
    sym12 = ldf `on.exit`;
    base12 = ldf `on.exit` in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L64() else L65();
  D15():
    deopt 70 [r60];
  L16():
    plot_new = ldf `plot.new`;
    check L66() else D24();
  L52():
    lines1 = ldf lines;
    check L53() else D16();
  L64():
    on_exit1 = ldf `on.exit` in base;
    r102 = dyn on_exit1(<lang par(opar)>, TRUE);
    goto L16();
  L65():
    r100 = dyn base12[, add](<lang par(opar)>, TRUE);
    goto L16();
  D16():
    deopt 72 [];
  D24():
    deopt 104 [];
  L53():
    p16 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c11 = `is.object`(x30);
      if c11 then L1() else L2(x30);
    L0(dx15):
      return dx15;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x30);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x32):
      r61 = `$`(x32, <sym freq>);
      goto L0(r61);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p18 = prom<V +>{
      pmax = ldf pmax;
      p17 = prom<V +>{
        sym6 = ldf tanh;
        base6 = ldf tanh in base;
        guard6 = `==`.4(sym6, base6);
        if guard6 then L2() else L3();
      L0(r64):
        return r64;
      L2():
        sym7 = ldf atanh;
        base7 = ldf atanh in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L4() else L5();
      L3():
        r63 = dyn base6(<lang `-`(atanh(coh), `*`(z, se))>);
        goto L0(r63);
      L1(r66):
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        se2 = ld se;
        se3 = force? se2;
        checkMissing(se3);
        r68 = `*`(z3, se3);
        r69 = `-`(r66, r68);
        r70 = tanh(r69);
        goto L0(r70);
      L4():
        coh2 = ld coh;
        coh3 = force? coh2;
        checkMissing(coh3);
        r67 = atanh(coh3);
        goto L1(r67);
      L5():
        r65 = dyn base7(<sym coh>);
        goto L1(r65);
      };
      r72 = dyn pmax(0.0, p17);
      r73 = `^`(r72, 2.0);
      return r73;
    };
    p19 = prom<V +>{
      ci_lty3 = ld `ci.lty`;
      ci_lty4 = force? ci_lty3;
      checkMissing(ci_lty4);
      return ci_lty4;
    };
    p20 = prom<V +>{
      ci_col3 = ld `ci.col`;
      ci_col4 = force? ci_col3;
      checkMissing(ci_col4);
      return ci_col4;
    };
    r77 = dyn lines1[, , lty, col](p16, p18, p19, p20);
    check L54() else D17();
  L66():
    r103 = dyn plot_new();
    check L67() else D25();
  D17():
    deopt 79 [r77];
  D25():
    deopt 105 [r103];
  L54():
    title = ldf title;
    check L55() else D18();
  L67():
    nser6 = ld nser;
    check L68() else D26();
  D18():
    deopt 81 [];
  D26():
    deopt 107 [2.0, nser6];
  L55():
    p21 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    r79 = dyn title(p21);
    check L56() else D19();
  L68():
    nser7 = force? nser6;
    checkMissing(nser7);
    r104 = `:`(2.0, nser7);
    s = toForSeq(r104);
    l = length(s);
    i = 0;
    goto L17(i);
  D19():
    deopt 83 [r79];
  L17(i1):
    i2 = `+`.1(i1, 1);
    c15 = `<`.1(l, i2);
    if c15 then L69() else L24();
  L56():
    goto L14();
  L24():
    x33 = `[[`(s, i2, NULL, TRUE);
    st j = x33;
    j = ld j;
    check L70() else D27();
  L69():
    goto L14();
  D27():
    deopt 111 [i2, 1, j];
  L70():
    j1 = force? j;
    checkMissing(j1);
    r105 = `-`(j1, 1.0);
    r106 = `:`(1, r105);
    s1 = toForSeq(r106);
    l1 = length(s1);
    i5 = 0;
    goto L18(i2, i5);
  L18(i6, i7):
    i8 = `+`.1(i7, 1);
    c16 = `<`.1(l1, i8);
    if c16 then L71() else L23();
  L23():
    x34 = `[[`(s1, i8, NULL, TRUE);
    st i = x34;
    par1 = ldf par;
    check L72() else D28();
  L71():
    goto L17(i6);
  D28():
    deopt 117 [i6, i8];
  L72():
    p25 = prom<V +>{
      sym13 = ldf c;
      base13 = ldf c in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r108):
      return r108;
    L1():
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      r109 = `-`(j3, 1.0);
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      r110 = `-`(nser9, 1.0);
      nser10 = ld nser;
      nser11 = force? nser10;
      checkMissing(nser11);
      r111 = `-`(nser11, 1.0);
      c17 = ldf c in base;
      r112 = dyn c17(r109, i14, r110, r111);
      goto L0(r112);
    L2():
      r107 = dyn base13(<lang `-`(j, 1.0)>, <sym i>, <lang `-`(nser, 1.0)>, <lang `-`(nser, 1.0)>);
      goto L0(r107);
    };
    r114 = dyn par1[mfg](p25);
    check L73() else D29();
  D29():
    deopt 120 [i6, i8, r114];
  L73():
    i15 = ld i;
    check L74() else D30();
  D30():
    deopt 121 [i6, i8, i15];
  L74():
    i16 = force? i15;
    checkMissing(i16);
    j4 = ld j;
    check L75() else D31();
  D31():
    deopt 122 [i6, i8, i16, j4];
  L75():
    j5 = force? j4;
    checkMissing(j5);
    r115 = `-`(j5, 1.0);
    j6 = ld j;
    check L76() else D32();
  D32():
    deopt 125 [i6, i8, i16, r115, j6];
  L76():
    j7 = force? j6;
    checkMissing(j7);
    r116 = `-`(j7, 2.0);
    r117 = `*`(r115, r116);
    r118 = `/`(r117, 2.0);
    r119 = `+`(i16, r118);
    st ind = r119;
    plot1 = ldf plot;
    check L77() else D33();
  D33():
    deopt 135 [i6, i8];
  L77():
    p26 = prom<V +>{
      x35 = ld x;
      x36 = force? x35;
      checkMissing(x36);
      c18 = `is.object`(x36);
      if c18 then L1() else L2(x36);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x36);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x38):
      r120 = `$`(x38, <sym freq>);
      goto L0(r120);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p27 = prom<V +>{
      x39 = ld x;
      x40 = force? x39;
      checkMissing(x40);
      c19 = `is.object`(x40);
      if c19 then L2() else L3(x40);
    L1(dx19):
      c20 = `is.object`(dx19);
      if c20 then L5() else L6();
    L2():
      dr18 = tryDispatchBuiltin.1("$", x40);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L4() else L3(dr18);
    L3(x42):
      r122 = `$`(x42, <sym coh>);
      goto L1(r122);
    L0(dx23):
      return dx23;
    L4():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L1(dx18);
    L5():
      dr20 = tryDispatchBuiltin.1("[", dx19);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L7() else L6();
    L6():
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r123 = dyn __(dx19, <missing>, ind1);
      goto L0(r123);
    L7():
      dx22 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx22);
    };
    p28 = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p29 = prom<V +>{
      ylim3 = ld ylim;
      ylim4 = force? ylim3;
      checkMissing(ylim4);
      return ylim4;
    };
    ddd2 = ld `...`;
    r127 = dyn plot1[, , type, ylim, axes, xlab, ylab, `...`](p26, p27, p28, p29, FALSE, "", "", ddd2);
    check L78() else D34();
  D34():
    deopt 149 [i6, i8, r127];
  L78():
    pmin1 = ldf pmin;
    check L79() else D35();
  D35():
    deopt 151 [i6, i8];
  L79():
    p30 = prom<V +>{
      sym14 = ldf sqrt;
      base14 = ldf sqrt in base;
      guard14 = `==`.4(sym14, base14);
      if guard14 then L2() else L3();
    L0(r129):
      return r129;
    L2():
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      c21 = `is.object`(x44);
      if c21 then L5() else L6(x44);
    L3():
      r128 = dyn base14(<lang `[`(`$`(x, coh), , ind)>);
      goto L0(r128);
    L4(dx25):
      c22 = `is.object`(dx25);
      if c22 then L8() else L9();
    L5():
      dr22 = tryDispatchBuiltin.1("$", x44);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L7() else L6(dr22);
    L6(x46):
      r130 = `$`(x46, <sym coh>);
      goto L4(r130);
    L1(dx29):
      r132 = sqrt(dx29);
      goto L0(r132);
    L7():
      dx24 = getTryDispatchBuiltinValue(dr22);
      goto L4(dx24);
    L8():
      dr24 = tryDispatchBuiltin.1("[", dx25);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L10() else L9();
    L9():
      ind2 = ld ind;
      ind3 = force? ind2;
      __1 = ldf `[` in base;
      r131 = dyn __1(dx25, <missing>, ind3);
      goto L1(r131);
    L10():
      dx28 = getTryDispatchBuiltinValue(dr24);
      goto L1(dx28);
    };
    r134 = dyn pmin1(0.99999, p30);
    check L80() else D36();
  D36():
    deopt 154 [i6, i8, r134];
  L80():
    st coh = r134;
    lines2 = ldf lines;
    check L81() else D37();
  D37():
    deopt 157 [i6, i8];
  L81():
    p31 = prom<V +>{
      x47 = ld x;
      x48 = force? x47;
      checkMissing(x48);
      c23 = `is.object`(x48);
      if c23 then L1() else L2(x48);
    L0(dx31):
      return dx31;
    L1():
      dr26 = tryDispatchBuiltin.1("$", x48);
      dc13 = getTryDispatchBuiltinDispatched(dr26);
      if dc13 then L3() else L2(dr26);
    L2(x50):
      r135 = `$`(x50, <sym freq>);
      goto L0(r135);
    L3():
      dx30 = getTryDispatchBuiltinValue(dr26);
      goto L0(dx30);
    };
    p32 = prom<V +>{
      sym15 = ldf tanh;
      base15 = ldf tanh in base;
      guard15 = `==`.4(sym15, base15);
      if guard15 then L2() else L3();
    L0(r138):
      r145 = `^`(r138, 2.0);
      return r145;
    L2():
      sym16 = ldf atanh;
      base16 = ldf atanh in base;
      guard16 = `==`.4(sym16, base16);
      if guard16 then L4() else L5();
    L3():
      r137 = dyn base15(<lang `+`(atanh(coh), `*`(z, se))>);
      goto L0(r137);
    L1(r140):
      z4 = ld z;
      z5 = force? z4;
      checkMissing(z5);
      se4 = ld se;
      se5 = force? se4;
      checkMissing(se5);
      r142 = `*`(z5, se5);
      r143 = `+`(r140, r142);
      r144 = tanh(r143);
      goto L0(r144);
    L4():
      coh4 = ld coh;
      coh5 = force? coh4;
      checkMissing(coh5);
      r141 = atanh(coh5);
      goto L1(r141);
    L5():
      r139 = dyn base16(<sym coh>);
      goto L1(r139);
    };
    p33 = prom<V +>{
      ci_lty5 = ld `ci.lty`;
      ci_lty6 = force? ci_lty5;
      checkMissing(ci_lty6);
      return ci_lty6;
    };
    p34 = prom<V +>{
      ci_col5 = ld `ci.col`;
      ci_col6 = force? ci_col5;
      checkMissing(ci_col6);
      return ci_col6;
    };
    r149 = dyn lines2[, , lty, col](p31, p32, p33, p34);
    check L82() else D38();
  D38():
    deopt 164 [i6, i8, r149];
  L82():
    lines3 = ldf lines;
    check L83() else D39();
  D39():
    deopt 166 [i6, i8];
  L83():
    p35 = prom<V +>{
      x51 = ld x;
      x52 = force? x51;
      checkMissing(x52);
      c24 = `is.object`(x52);
      if c24 then L1() else L2(x52);
    L0(dx33):
      return dx33;
    L1():
      dr28 = tryDispatchBuiltin.1("$", x52);
      dc14 = getTryDispatchBuiltinDispatched(dr28);
      if dc14 then L3() else L2(dr28);
    L2(x54):
      r150 = `$`(x54, <sym freq>);
      goto L0(r150);
    L3():
      dx32 = getTryDispatchBuiltinValue(dr28);
      goto L0(dx32);
    };
    p37 = prom<V +>{
      pmax1 = ldf pmax;
      p36 = prom<V +>{
        sym17 = ldf tanh;
        base17 = ldf tanh in base;
        guard17 = `==`.4(sym17, base17);
        if guard17 then L2() else L3();
      L0(r153):
        return r153;
      L2():
        sym18 = ldf atanh;
        base18 = ldf atanh in base;
        guard18 = `==`.4(sym18, base18);
        if guard18 then L4() else L5();
      L3():
        r152 = dyn base17(<lang `-`(atanh(coh), `*`(z, se))>);
        goto L0(r152);
      L1(r155):
        z6 = ld z;
        z7 = force? z6;
        checkMissing(z7);
        se6 = ld se;
        se7 = force? se6;
        checkMissing(se7);
        r157 = `*`(z7, se7);
        r158 = `-`(r155, r157);
        r159 = tanh(r158);
        goto L0(r159);
      L4():
        coh6 = ld coh;
        coh7 = force? coh6;
        checkMissing(coh7);
        r156 = atanh(coh7);
        goto L1(r156);
      L5():
        r154 = dyn base18(<sym coh>);
        goto L1(r154);
      };
      r161 = dyn pmax1(0.0, p36);
      r162 = `^`(r161, 2.0);
      return r162;
    };
    p38 = prom<V +>{
      ci_lty7 = ld `ci.lty`;
      ci_lty8 = force? ci_lty7;
      checkMissing(ci_lty8);
      return ci_lty8;
    };
    p39 = prom<V +>{
      ci_col7 = ld `ci.col`;
      ci_col8 = force? ci_col7;
      checkMissing(ci_col8);
      return ci_col8;
    };
    r166 = dyn lines3[, , lty, col](p35, p37, p38, p39);
    check L84() else D40();
  D40():
    deopt 173 [i6, i8, r166];
  L84():
    box = ldf box;
    check L85() else D41();
  D41():
    deopt 175 [i6, i8];
  L85():
    r167 = dyn box();
    check L86() else D42();
  D42():
    deopt 176 [i6, i8, r167];
  L86():
    i17 = ld i;
    check L87() else D43();
  D43():
    deopt 177 [i6, i8, i17];
  L87():
    i18 = force? i17;
    checkMissing(i18);
    r168 = `==`(i18, 1.0);
    c25 = `as.logical`(r168);
    if c25 then L88() else L19();
  L19():
    goto L20(i6, i8);
  L20(i23, i24):
    j10 = ld j;
    check L94() else D48();
  L88():
    axis = ldf axis;
    check L89() else D44();
  D44():
    deopt 182 [i6, i8];
  D48():
    deopt 196 [i23, i24, j10];
  L89():
    r169 = dyn axis[, xpd](2.0, NA_LGL);
    check L90() else D45();
  L94():
    j11 = force? j10;
    checkMissing(j11);
    nser12 = ld nser;
    check L95() else D49();
  D45():
    deopt 186 [i6, i8, r169];
  D49():
    deopt 197 [i23, i24, j11, nser12];
  L90():
    title1 = ldf title;
    check L91() else D46();
  L95():
    nser13 = force? nser12;
    checkMissing(nser13);
    r175 = `==`(j11, nser13);
    c28 = `as.logical`(r175);
    if c28 then L96() else L21();
  D46():
    deopt 188 [i6, i8];
  L21():
    goto L22(i23, i24);
  L22(i31, i32):
    mtext = ldf mtext;
    check L102() else D54();
  L91():
    p40 = prom<V +>{
      x55 = ld x;
      x56 = force? x55;
      checkMissing(x56);
      c26 = `is.object`(x56);
      if c26 then L2() else L3(x56);
    L1(dx35):
      c27 = `is.object`(dx35);
      if c27 then L5() else L6(dx35);
    L2():
      dr30 = tryDispatchBuiltin.1("$", x56);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L4() else L3(dr30);
    L3(x58):
      r170 = `$`(x58, <sym snames>);
      goto L1(r170);
    L0(dx39):
      return dx39;
    L4():
      dx34 = getTryDispatchBuiltinValue(dr30);
      goto L1(dx34);
    L5():
      dr32 = tryDispatchBuiltin.1("[", dx35);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L7() else L6(dr32);
    L6(dx37):
      j8 = ld j;
      j9 = force? j8;
      __2 = ldf `[` in base;
      r171 = dyn __2(dx37, j9);
      goto L0(r171);
    L7():
      dx38 = getTryDispatchBuiltinValue(dr32);
      goto L0(dx38);
    };
    r173 = dyn title1[ylab, xpd](p40, NA_LGL);
    check L92() else D47();
  L96():
    axis1 = ldf axis;
    check L97() else D50();
  D47():
    deopt 193 [i6, i8, r173];
  D50():
    deopt 201 [i23, i24];
  D54():
    deopt 216 [i31, i32];
  L92():
    goto L20(i6, i8);
  L97():
    r176 = dyn axis1[, xpd](1.0, NA_LGL);
    check L98() else D51();
  L102():
    p42 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    p43 = prom<V +>{
      par2 = ldf par;
      r183 = dyn par2("cex.main");
      return r183;
    };
    p44 = prom<V +>{
      par3 = ldf par;
      r185 = dyn par3("font.main");
      return r185;
    };
    r187 = dyn mtext[, , , , , cex, font](p42, 3.0, 3.0, TRUE, 0.5, p43, p44);
    check L103() else D55();
  D51():
    deopt 205 [i23, i24, r176];
  D55():
    deopt 226 [i31, i32, r187];
  L98():
    title2 = ldf title;
    check L99() else D52();
  L103():
    goto L18(i31, i32);
  D52():
    deopt 207 [i23, i24];
  L99():
    p41 = prom<V +>{
      x59 = ld x;
      x60 = force? x59;
      checkMissing(x60);
      c29 = `is.object`(x60);
      if c29 then L2() else L3(x60);
    L1(dx41):
      c30 = `is.object`(dx41);
      if c30 then L5() else L6(dx41);
    L2():
      dr34 = tryDispatchBuiltin.1("$", x60);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L4() else L3(dr34);
    L3(x62):
      r177 = `$`(x62, <sym snames>);
      goto L1(r177);
    L0(dx45):
      return dx45;
    L4():
      dx40 = getTryDispatchBuiltinValue(dr34);
      goto L1(dx40);
    L5():
      dr36 = tryDispatchBuiltin.1("[", dx41);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L7() else L6(dr36);
    L6(dx43):
      i29 = ld i;
      i30 = force? i29;
      __3 = ldf `[` in base;
      r178 = dyn __3(dx43, i30);
      goto L0(r178);
    L7():
      dx44 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx44);
    };
    r180 = dyn title2[xlab, xpd](p41, NA_LGL);
    check L100() else D53();
  D53():
    deopt 212 [i23, i24, r180];
  L100():
    goto L22(i23, i24);
  }
}