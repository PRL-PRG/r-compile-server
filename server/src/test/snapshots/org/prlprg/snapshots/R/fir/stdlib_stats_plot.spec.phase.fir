fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3321760888;
    st `plot.spec.phase` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3321760888(x, ci, xlab, ylab, ylim, type, main, `ci.col`, `ci.lty`, `...`) {
  (reg x:*, reg ci:*, reg xlab:*, reg ylab:*, reg ylim:*, reg type:*, reg main:*, reg ci_col:*, reg ci_lty:*, reg ddd:dots) -+> V { var x:*, var ci:*, reg ci_isMissing:L, reg ci_orDefault:*, var xlab:*, reg xlab_isMissing:L, reg xlab_orDefault:*, var ylab:*, reg ylab_isMissing:L, reg ylab_orDefault:*, var ylim:*, reg ylim_isMissing:L, reg ylim_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), var type:*, reg type_isMissing:L, reg type_orDefault:*, var main:*, reg main_isMissing:L, reg main_orDefault:*, var `ci.col`:*, reg ci_col_isMissing:L, reg ci_col_orDefault:*, var `ci.lty`:*, reg ci_lty_isMissing:L, reg ci_lty_orDefault:*, var `...`:dots?, reg NCOL:cls, reg x1:*, reg x2:V, reg c1:L, reg x4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r4:V, reg p1:p(V +), reg r6:V, reg x5:*, reg x6:V, reg c2:L, reg r8:R, reg x8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg r10:R, reg dx3:V, reg r11:V, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg main1:*, reg main2:V, reg c3:V, reg c4:L, reg paste:cls, reg paste1:cls, reg x9:*, reg x10:V, reg c5:L, reg x12:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r15:V, reg p2:p(V +), reg r17:V, reg p3:p(V +), reg r19:V, reg nser:*, reg nser1:V, reg r21:V, reg c6:L, reg plot:cls, reg x13:*, reg x14:V, reg c7:L, reg x16:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg r22:V, reg p4:p(V +), reg x17:*, reg x18:V, reg c8:L, reg x20:V, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg r24:V, reg p5:p(V +), reg type1:*, reg type2:V, reg p6:p(V +), reg xlab1:*, reg xlab2:V, reg p7:p(V +), reg ylab1:*, reg ylab2:V, reg p8:p(V +), reg ylim1:*, reg ylim2:V, reg p9:p(V +), reg ddd1:dots?, reg r30:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r31:V, reg r32:V, reg x21:*, reg x22:V, reg c9:L, reg x24:V, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg r33:V, reg r34:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r35:V, reg r36:V, reg pmin:cls, reg qt:cls, reg ci1:*, reg ci2:V, reg p10:p(V +), reg gg:*, reg gg1:V, reg r38:V, reg r39:V, reg p11:p(V +), reg r41:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r44:V, reg r45:V, reg r46:V, reg gg2:*, reg gg3:V, reg coh:*, reg coh1:V, reg r47:V, reg r48:V, reg r49:V, reg gg4:*, reg gg5:V, reg r50:V, reg r51:V, reg r52:V, reg r53:V, reg r54:V, reg p12:p(V +), reg r56:V, reg r57:V, reg lines:cls, reg x25:*, reg x26:V, reg c10:L, reg x28:V, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg r58:V, reg p13:p(V +), reg x29:*, reg x30:V, reg c11:L, reg x32:V, reg dr14:V, reg dc7:L, reg dx14:V, reg dx15:V, reg r60:V, reg cl:*, reg cl1:V, reg r61:V, reg p14:p(V +), reg ci_lty1:*, reg ci_lty2:V, reg p15:p(V +), reg ci_col1:*, reg ci_col2:V, reg p16:p(V +), reg r65:V, reg lines1:cls, reg x33:*, reg x34:V, reg c12:L, reg x36:V, reg dr16:V, reg dc8:L, reg dx16:V, reg dx17:V, reg r66:V, reg p17:p(V +), reg x37:*, reg x38:V, reg c13:L, reg x40:V, reg dr18:V, reg dc9:L, reg dx18:V, reg dx19:V, reg r68:V, reg cl2:*, reg cl3:V, reg r69:V, reg p18:p(V +), reg ci_lty3:*, reg ci_lty4:V, reg p19:p(V +), reg ci_col3:*, reg ci_col4:V, reg p20:p(V +), reg r73:V, reg title:cls, reg main3:*, reg main4:V, reg p21:p(V +), reg r75:V, reg dev_hold:cls, reg r77:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r78:V, reg on_exit:cls, reg r80:V, reg par:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r81:V, reg r82:V, reg nser2:*, reg nser3:V, reg r83:V, reg nser4:*, reg nser5:V, reg r84:V, reg c14:cls, reg r85:V, reg p22:p(V +), reg sym7:cls, reg base7:cls, reg guard7:L, reg r87:V, reg r88:V, reg c15:cls, reg r89:V, reg p23:p(V +), reg sym8:cls, reg base8:cls, reg guard8:L, reg r91:V, reg r92:V, reg c16:cls, reg r93:V, reg p24:p(V +), reg r95:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r96:V, reg on_exit1:cls, reg r98:V, reg plot_new:cls, reg r99:V, reg nser6:*, reg nser7:V, reg r100:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c17:L, reg x41:V, reg j:*, reg j1:V, reg r101:V, reg r102:V, reg s1:V, reg l1:I, reg i5:I, reg i6:I, reg i7:I, reg i8:I, reg c18:L, reg x42:V, reg par1:cls, reg sym10:cls, reg base10:cls, reg guard10:L, reg r103:V, reg r104:V, reg j2:*, reg j3:V, reg r105:V, reg i13:*, reg i14:V, reg nser8:*, reg nser9:V, reg r106:V, reg nser10:*, reg nser11:V, reg r107:V, reg c19:cls, reg r108:V, reg p25:p(V +), reg r110:V, reg i15:*, reg i16:V, reg j4:*, reg j5:V, reg r111:V, reg j6:*, reg j7:V, reg r112:V, reg r113:V, reg r114:V, reg r115:V, reg plot1:cls, reg x43:*, reg x44:V, reg c20:L, reg x46:V, reg dr20:V, reg dc10:L, reg dx20:V, reg dx21:V, reg r116:V, reg p26:p(V +), reg x47:*, reg x48:V, reg c21:L, reg x50:V, reg dr22:V, reg dc11:L, reg dx22:V, reg dx23:V, reg r118:V, reg c22:L, reg dr24:V, reg dc12:L, reg dx26:V, reg dx27:V, reg ind:*, reg ind1:V, reg __:cls, reg r119:V, reg p27:p(V +), reg type3:*, reg type4:V, reg p28:p(V +), reg ylim3:*, reg ylim4:V, reg p29:p(V +), reg ddd2:dots?, reg r123:V, reg sym11:cls, reg base11:cls, reg guard11:L, reg r124:V, reg i21:I, reg i22:I, reg r125:V, reg x51:*, reg x52:V, reg c23:L, reg i25:I, reg i26:I, reg x54:V, reg dr26:V, reg dc13:L, reg dx28:V, reg i29:I, reg i30:I, reg dx29:V, reg r126:V, reg c24:L, reg i33:I, reg i34:I, reg dx31:V, reg dr28:V, reg dc14:L, reg dx32:V, reg i37:I, reg i38:I, reg dx33:V, reg ind2:*, reg ind3:V, reg __1:cls, reg r127:V, reg r128:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r129:V, reg i43:I, reg i44:I, reg r130:V, reg pmin1:cls, reg qt1:cls, reg ci3:*, reg ci4:V, reg p30:p(V +), reg gg6:*, reg gg7:V, reg r132:V, reg r133:V, reg p31:p(V +), reg r135:V, reg sym13:cls, reg base13:cls, reg guard13:L, reg r138:V, reg r139:V, reg r140:V, reg gg8:*, reg gg9:V, reg coh2:*, reg coh3:V, reg r141:V, reg r142:V, reg r143:V, reg gg10:*, reg gg11:V, reg r144:V, reg r145:V, reg r146:V, reg r147:V, reg r148:V, reg p32:p(V +), reg r150:V, reg r151:V, reg lines2:cls, reg x55:*, reg x56:V, reg c25:L, reg x58:V, reg dr30:V, reg dc15:L, reg dx34:V, reg dx35:V, reg r152:V, reg p33:p(V +), reg x59:*, reg x60:V, reg c26:L, reg x62:V, reg dr32:V, reg dc16:L, reg dx36:V, reg dx37:V, reg r154:V, reg c27:L, reg dr34:V, reg dc17:L, reg dx40:V, reg dx41:V, reg ind4:*, reg ind5:V, reg __2:cls, reg r155:V, reg cl4:*, reg cl5:V, reg r156:V, reg p34:p(V +), reg ci_lty5:*, reg ci_lty6:V, reg p35:p(V +), reg ci_col5:*, reg ci_col6:V, reg p36:p(V +), reg r160:V, reg lines3:cls, reg x63:*, reg x64:V, reg c28:L, reg x66:V, reg dr36:V, reg dc18:L, reg dx42:V, reg dx43:V, reg r161:V, reg p37:p(V +), reg x67:*, reg x68:V, reg c29:L, reg x70:V, reg dr38:V, reg dc19:L, reg dx44:V, reg dx45:V, reg r163:V, reg c30:L, reg dr40:V, reg dc20:L, reg dx48:V, reg dx49:V, reg ind6:*, reg ind7:V, reg __3:cls, reg r164:V, reg cl6:*, reg cl7:V, reg r165:V, reg p38:p(V +), reg ci_lty7:*, reg ci_lty8:V, reg p39:p(V +), reg ci_col7:*, reg ci_col8:V, reg p40:p(V +), reg r169:V, reg box:cls, reg r170:V, reg i45:*, reg i46:V, reg r171:V, reg c31:L, reg axis:cls, reg r172:V, reg title1:cls, reg x71:*, reg x72:V, reg c32:L, reg x74:V, reg dr42:V, reg dc21:L, reg dx50:V, reg dx51:V, reg r173:V, reg c33:L, reg dx53:V, reg dr44:V, reg dc22:L, reg dx54:V, reg dx55:V, reg j8:*, reg j9:V, reg __4:cls, reg r174:V, reg p41:p(V +), reg r176:V, reg i51:I, reg i52:I, reg j10:*, reg j11:V, reg nser12:*, reg nser13:V, reg r178:V, reg c34:L, reg axis1:cls, reg r179:V, reg title2:cls, reg x75:*, reg x76:V, reg c35:L, reg x78:V, reg dr46:V, reg dc23:L, reg dx56:V, reg dx57:V, reg r180:V, reg c36:L, reg dx59:V, reg dr48:V, reg dc24:L, reg dx60:V, reg dx61:V, reg i57:*, reg i58:V, reg __5:cls, reg r181:V, reg p42:p(V +), reg r183:V, reg i59:I, reg i60:I, reg mtext:cls, reg main5:*, reg main6:V, reg p43:p(V +), reg par2:cls, reg r186:V, reg p44:p(V +), reg par3:cls, reg r188:V, reg p45:p(V +), reg r190:V, reg sym14:cls, reg base14:cls, reg guard14:L, reg r191:V, reg r192:V, reg invisible:cls, reg r193:V |
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
    if ylab_isMissing then L2("phase") else L2(ylab);
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
      r2 = dyn c(-3.141592653589793, 3.141592653589793);
      goto L0(r2);
    L2():
      r = dyn base(<lang `-`(pi)>, <sym pi>);
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
    check L30() else D0();
  D0():
    deopt 1 [];
  L30():
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
    check L31() else D1();
  D1():
    deopt 3 [r6];
  L31():
    st nser = r6;
    x5 = ld x;
    check L32() else D2();
  D2():
    deopt 6 [2.0, x5];
  L32():
    x6 = force? x5;
    checkMissing(x6);
    c2 = `is.object`(x6);
    if c2 then L34() else L35(2.0, x6);
  L33(r10, dx3):
    r12 = `/`(r10, dx3);
    st gg = r12;
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L37() else L38();
  L34():
    dr2 = tryDispatchBuiltin.1("$", x6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(2.0, dr2);
  L35(r8, x8):
    r11 = `$`(x8, <sym df>);
    goto L33(r8, r11);
  L9(r14):
    c4 = `as.logical`(r14);
    if c4 then L40() else L10();
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L33(2.0, dx2);
  L37():
    main1 = ld main;
    check L39() else D3();
  L38():
    r13 = dyn base1(<sym main>);
    goto L9(r13);
  D3():
    deopt 12 [main1];
  L10():
    goto L11();
  L11():
    nser = ld nser;
    check L44() else D6();
  L39():
    main2 = force? main1;
    checkMissing(main2);
    c3 = `==`(main2, NULL);
    goto L9(c3);
  L40():
    paste = ldf paste;
    check L41() else D4();
  D4():
    deopt 16 [];
  D6():
    deopt 25 [nser];
  L41():
    p3 = prom<V +>{
      paste1 = ldf paste;
      p2 = prom<V +>{
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
        r15 = `$`(x12, <sym series>);
        goto L0(r15);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r17 = dyn paste1("Series:", p2);
      return r17;
    };
    r19 = dyn paste[, , sep](p3, "Phase spectrum", "  -- ");
    check L42() else D5();
  L44():
    nser1 = force? nser;
    checkMissing(nser1);
    r21 = `==`(nser1, 2.0);
    c6 = `as.logical`(r21);
    if c6 then L45() else L12();
  D5():
    deopt 21 [r19];
  L12():
    dev_hold = ldf `dev.hold`;
    check L66() else D18();
  L15():
    sym14 = ldf invisible;
    base14 = ldf invisible in base;
    guard14 = `==`.4(sym14, base14);
    if guard14 then L125() else L126();
  L42():
    st main = r19;
    goto L11();
  L45():
    plot = ldf plot;
    check L46() else D7();
  D7():
    deopt 30 [];
  D18():
    deopt 80 [];
  L29(r192):
    popenv;
    return r192;
  L46():
    p4 = prom<V +>{
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
      r22 = `$`(x16, <sym freq>);
      goto L0(r22);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p5 = prom<V +>{
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
      r24 = `$`(x20, <sym phase>);
      goto L0(r24);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr8);
      goto L0(dx8);
    };
    p6 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    p7 = prom<V +>{
      xlab1 = ld xlab;
      xlab2 = force? xlab1;
      checkMissing(xlab2);
      return xlab2;
    };
    p8 = prom<V +>{
      ylab1 = ld ylab;
      ylab2 = force? ylab1;
      checkMissing(ylab2);
      return ylab2;
    };
    p9 = prom<V +>{
      ylim1 = ld ylim;
      ylim2 = force? ylim1;
      checkMissing(ylim2);
      return ylim2;
    };
    ddd1 = ld `...`;
    r30 = dyn plot[, , type, xlab, ylab, ylim, `...`](p4, p5, p6, p7, p8, p9, ddd1);
    check L47() else D8();
  L66():
    r77 = dyn dev_hold();
    check L67() else D19();
  L125():
    invisible = ldf invisible in base;
    r193 = dyn invisible();
    check L127() else D56();
  L126():
    r191 = dyn base14();
    goto L29(r191);
  D8():
    deopt 42 [r30];
  D19():
    deopt 81 [r77];
  D56():
    deopt 244 [r193];
  L47():
    sym2 = ldf sqrt;
    base2 = ldf sqrt in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  L67():
    sym5 = ldf `on.exit`;
    base5 = ldf `on.exit` in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L68() else L69();
  L127():
    goto L29(r193);
  L13(r32):
    st coh = r32;
    sym3 = ldf asin;
    base3 = ldf asin in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L55() else L56();
  L16():
    par = ldf par;
    check L70() else D20();
  L48():
    x21 = ld x;
    check L50() else D9();
  L49():
    r31 = dyn base2(<lang `$`(x, coh)>);
    goto L13(r31);
  L68():
    on_exit = ldf `on.exit` in base;
    r80 = dyn on_exit(<lang dev.flush()>);
    goto L16();
  L69():
    r78 = dyn base5(<lang dev.flush()>);
    goto L16();
  D9():
    deopt 44 [x21];
  D20():
    deopt 86 [];
  L14(r36):
    st cl = r36;
    lines = ldf lines;
    check L59() else D12();
  L50():
    x22 = force? x21;
    checkMissing(x22);
    c9 = `is.object`(x22);
    if c9 then L52() else L53(x22);
  L55():
    pmin = ldf pmin;
    check L57() else D10();
  L56():
    r35 = dyn base3(<lang pmin(0.9999, `*`(qt(ci, `-`(`/`(2.0, gg), 2.0)), sqrt(`/`(`*`(gg, `(`(`-`(`^`(coh, {
                      `-`(2.0)
                    }), 1.0))), `(`(`*`(2.0, `(`(`-`(1.0, gg))))))))>);
    goto L14(r35);
  L70():
    p22 = prom<V +>{
      sym6 = ldf c;
      base6 = ldf c in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L1() else L2();
    L0(r82):
      return r82;
    L1():
      nser2 = ld nser;
      nser3 = force? nser2;
      checkMissing(nser3);
      r83 = `-`(nser3, 1.0);
      nser4 = ld nser;
      nser5 = force? nser4;
      checkMissing(nser5);
      r84 = `-`(nser5, 1.0);
      c14 = ldf c in base;
      r85 = dyn c14(r83, r84);
      goto L0(r85);
    L2():
      r81 = dyn base6(<lang `-`(nser, 1.0)>, <lang `-`(nser, 1.0)>);
      goto L0(r81);
    };
    p23 = prom<V +>{
      sym7 = ldf c;
      base7 = ldf c in base;
      guard7 = `==`.4(sym7, base7);
      if guard7 then L1() else L2();
    L0(r88):
      return r88;
    L1():
      c15 = ldf c in base;
      r89 = dyn c15(1.5, 1.5, 0.5, 0.5);
      goto L0(r89);
    L2():
      r87 = dyn base7(1.5, 1.5, 0.5, 0.5);
      goto L0(r87);
    };
    p24 = prom<V +>{
      sym8 = ldf c;
      base8 = ldf c in base;
      guard8 = `==`.4(sym8, base8);
      if guard8 then L1() else L2();
    L0(r92):
      return r92;
    L1():
      c16 = ldf c in base;
      r93 = dyn c16(4.0, 4.0, 6.0, 4.0);
      goto L0(r93);
    L2():
      r91 = dyn base8(4.0, 4.0, 6.0, 4.0);
      goto L0(r91);
    };
    r95 = dyn par[mfrow, mar, oma](p22, p23, p24);
    check L71() else D21();
  D10():
    deopt 51 [];
  D12():
    deopt 58 [];
  D21():
    deopt 93 [r95];
  L51(dx11):
    r34 = sqrt(dx11);
    goto L13(r34);
  L52():
    dr10 = tryDispatchBuiltin.1("$", x22);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L54() else L53(dr10);
  L53(x24):
    r33 = `$`(x24, <sym coh>);
    goto L51(r33);
  L57():
    p12 = prom<V +>{
      qt = ldf qt;
      p10 = prom<V +>{
        ci1 = ld ci;
        ci2 = force? ci1;
        checkMissing(ci2);
        return ci2;
      };
      p11 = prom<V +>{
        gg = ld gg;
        gg1 = force? gg;
        checkMissing(gg1);
        r38 = `/`(2.0, gg1);
        r39 = `-`(r38, 2.0);
        return r39;
      };
      r41 = dyn qt(p10, p11);
      sym4 = ldf sqrt;
      base4 = ldf sqrt in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r45, r46):
      r54 = `*`(r45, r46);
      return r54;
    L1():
      gg2 = ld gg;
      gg3 = force? gg2;
      checkMissing(gg3);
      coh = ld coh;
      coh1 = force? coh;
      checkMissing(coh1);
      r47 = `^`(coh1, -2.0);
      r48 = `-`(r47, 1.0);
      r49 = `*`(gg3, r48);
      gg4 = ld gg;
      gg5 = force? gg4;
      checkMissing(gg5);
      r50 = `-`(1.0, gg5);
      r51 = `*`(2.0, r50);
      r52 = `/`(r49, r51);
      r53 = sqrt(r52);
      goto L0(r41, r53);
    L2():
      r44 = dyn base4(<lang `/`(`*`(gg, `(`(`-`(`^`(coh, {
                  `-`(2.0)
                }), 1.0))), `(`(`*`(2.0, `(`(`-`(1.0, gg)))))>);
      goto L0(r41, r44);
    };
    r56 = dyn pmin(0.9999, p12);
    check L58() else D11();
  L59():
    p13 = prom<V +>{
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
      r58 = `$`(x28, <sym freq>);
      goto L0(r58);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    p14 = prom<V +>{
      x29 = ld x;
      x30 = force? x29;
      checkMissing(x30);
      c11 = `is.object`(x30);
      if c11 then L1() else L2(x30);
    L0(dx15):
      cl = ld cl;
      cl1 = force? cl;
      checkMissing(cl1);
      r61 = `+`(dx15, cl1);
      return r61;
    L1():
      dr14 = tryDispatchBuiltin.1("$", x30);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x32):
      r60 = `$`(x32, <sym phase>);
      goto L0(r60);
    L3():
      dx14 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx14);
    };
    p15 = prom<V +>{
      ci_lty1 = ld `ci.lty`;
      ci_lty2 = force? ci_lty1;
      checkMissing(ci_lty2);
      return ci_lty2;
    };
    p16 = prom<V +>{
      ci_col1 = ld `ci.col`;
      ci_col2 = force? ci_col1;
      checkMissing(ci_col2);
      return ci_col2;
    };
    r65 = dyn lines[, , lty, col](p13, p14, p15, p16);
    check L60() else D13();
  L71():
    st opar = r95;
    sym9 = ldf `on.exit`;
    base9 = ldf `on.exit` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L72() else L73();
  D11():
    deopt 54 [r56];
  D13():
    deopt 65 [r65];
  L17():
    plot_new = ldf `plot.new`;
    check L74() else D22();
  L54():
    dx10 = getTryDispatchBuiltinValue(dr10);
    goto L51(dx10);
  L58():
    r57 = asin(r56);
    goto L14(r57);
  L60():
    lines1 = ldf lines;
    check L61() else D14();
  L72():
    on_exit1 = ldf `on.exit` in base;
    r98 = dyn on_exit1(<lang par(opar)>, TRUE);
    goto L17();
  L73():
    r96 = dyn base9[, add](<lang par(opar)>, TRUE);
    goto L17();
  D14():
    deopt 67 [];
  D22():
    deopt 99 [];
  L61():
    p17 = prom<V +>{
      x33 = ld x;
      x34 = force? x33;
      checkMissing(x34);
      c12 = `is.object`(x34);
      if c12 then L1() else L2(x34);
    L0(dx17):
      return dx17;
    L1():
      dr16 = tryDispatchBuiltin.1("$", x34);
      dc8 = getTryDispatchBuiltinDispatched(dr16);
      if dc8 then L3() else L2(dr16);
    L2(x36):
      r66 = `$`(x36, <sym freq>);
      goto L0(r66);
    L3():
      dx16 = getTryDispatchBuiltinValue(dr16);
      goto L0(dx16);
    };
    p18 = prom<V +>{
      x37 = ld x;
      x38 = force? x37;
      checkMissing(x38);
      c13 = `is.object`(x38);
      if c13 then L1() else L2(x38);
    L0(dx19):
      cl2 = ld cl;
      cl3 = force? cl2;
      checkMissing(cl3);
      r69 = `-`(dx19, cl3);
      return r69;
    L1():
      dr18 = tryDispatchBuiltin.1("$", x38);
      dc9 = getTryDispatchBuiltinDispatched(dr18);
      if dc9 then L3() else L2(dr18);
    L2(x40):
      r68 = `$`(x40, <sym phase>);
      goto L0(r68);
    L3():
      dx18 = getTryDispatchBuiltinValue(dr18);
      goto L0(dx18);
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
    r73 = dyn lines1[, , lty, col](p17, p18, p19, p20);
    check L62() else D15();
  L74():
    r99 = dyn plot_new();
    check L75() else D23();
  D15():
    deopt 74 [r73];
  D23():
    deopt 100 [r99];
  L62():
    title = ldf title;
    check L63() else D16();
  L75():
    nser6 = ld nser;
    check L76() else D24();
  D16():
    deopt 76 [];
  D24():
    deopt 102 [2.0, nser6];
  L63():
    p21 = prom<V +>{
      main3 = ld main;
      main4 = force? main3;
      checkMissing(main4);
      return main4;
    };
    r75 = dyn title(p21);
    check L64() else D17();
  L76():
    nser7 = force? nser6;
    checkMissing(nser7);
    r100 = `:`(2.0, nser7);
    s = toForSeq(r100);
    l = length(s);
    i = 0;
    goto L18(i);
  D17():
    deopt 78 [r75];
  L18(i1):
    i2 = `+`.1(i1, 1);
    c17 = `<`.1(l, i2);
    if c17 then L77() else L28();
  L64():
    goto L15();
  L28():
    x41 = `[[`(s, i2, NULL, TRUE);
    st j = x41;
    j = ld j;
    check L78() else D25();
  L77():
    goto L15();
  D25():
    deopt 106 [i2, 1, j];
  L78():
    j1 = force? j;
    checkMissing(j1);
    r101 = `-`(j1, 1.0);
    r102 = `:`(1, r101);
    s1 = toForSeq(r102);
    l1 = length(s1);
    i5 = 0;
    goto L19(i2, i5);
  L19(i6, i7):
    i8 = `+`.1(i7, 1);
    c18 = `<`.1(l1, i8);
    if c18 then L79() else L27();
  L27():
    x42 = `[[`(s1, i8, NULL, TRUE);
    st i = x42;
    par1 = ldf par;
    check L80() else D26();
  L79():
    goto L18(i6);
  D26():
    deopt 112 [i6, i8];
  L80():
    p25 = prom<V +>{
      sym10 = ldf c;
      base10 = ldf c in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L1() else L2();
    L0(r104):
      return r104;
    L1():
      j2 = ld j;
      j3 = force? j2;
      checkMissing(j3);
      r105 = `-`(j3, 1.0);
      i13 = ld i;
      i14 = force? i13;
      checkMissing(i14);
      nser8 = ld nser;
      nser9 = force? nser8;
      checkMissing(nser9);
      r106 = `-`(nser9, 1.0);
      nser10 = ld nser;
      nser11 = force? nser10;
      checkMissing(nser11);
      r107 = `-`(nser11, 1.0);
      c19 = ldf c in base;
      r108 = dyn c19(r105, i14, r106, r107);
      goto L0(r108);
    L2():
      r103 = dyn base10(<lang `-`(j, 1.0)>, <sym i>, <lang `-`(nser, 1.0)>, <lang `-`(nser, 1.0)>);
      goto L0(r103);
    };
    r110 = dyn par1[mfg](p25);
    check L81() else D27();
  D27():
    deopt 115 [i6, i8, r110];
  L81():
    i15 = ld i;
    check L82() else D28();
  D28():
    deopt 116 [i6, i8, i15];
  L82():
    i16 = force? i15;
    checkMissing(i16);
    j4 = ld j;
    check L83() else D29();
  D29():
    deopt 117 [i6, i8, i16, j4];
  L83():
    j5 = force? j4;
    checkMissing(j5);
    r111 = `-`(j5, 1.0);
    j6 = ld j;
    check L84() else D30();
  D30():
    deopt 120 [i6, i8, i16, r111, j6];
  L84():
    j7 = force? j6;
    checkMissing(j7);
    r112 = `-`(j7, 2.0);
    r113 = `*`(r111, r112);
    r114 = `/`(r113, 2.0);
    r115 = `+`(i16, r114);
    st ind = r115;
    plot1 = ldf plot;
    check L85() else D31();
  D31():
    deopt 130 [i6, i8];
  L85():
    p26 = prom<V +>{
      x43 = ld x;
      x44 = force? x43;
      checkMissing(x44);
      c20 = `is.object`(x44);
      if c20 then L1() else L2(x44);
    L0(dx21):
      return dx21;
    L1():
      dr20 = tryDispatchBuiltin.1("$", x44);
      dc10 = getTryDispatchBuiltinDispatched(dr20);
      if dc10 then L3() else L2(dr20);
    L2(x46):
      r116 = `$`(x46, <sym freq>);
      goto L0(r116);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr20);
      goto L0(dx20);
    };
    p27 = prom<V +>{
      x47 = ld x;
      x48 = force? x47;
      checkMissing(x48);
      c21 = `is.object`(x48);
      if c21 then L2() else L3(x48);
    L1(dx23):
      c22 = `is.object`(dx23);
      if c22 then L5() else L6();
    L2():
      dr22 = tryDispatchBuiltin.1("$", x48);
      dc11 = getTryDispatchBuiltinDispatched(dr22);
      if dc11 then L4() else L3(dr22);
    L3(x50):
      r118 = `$`(x50, <sym phase>);
      goto L1(r118);
    L0(dx27):
      return dx27;
    L4():
      dx22 = getTryDispatchBuiltinValue(dr22);
      goto L1(dx22);
    L5():
      dr24 = tryDispatchBuiltin.1("[", dx23);
      dc12 = getTryDispatchBuiltinDispatched(dr24);
      if dc12 then L7() else L6();
    L6():
      ind = ld ind;
      ind1 = force? ind;
      __ = ldf `[` in base;
      r119 = dyn __(dx23, <missing>, ind1);
      goto L0(r119);
    L7():
      dx26 = getTryDispatchBuiltinValue(dr24);
      goto L0(dx26);
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
    r123 = dyn plot1[, , type, ylim, axes, xlab, ylab, `...`](p26, p27, p28, p29, FALSE, "", "", ddd2);
    check L86() else D32();
  D32():
    deopt 144 [i6, i8, r123];
  L86():
    sym11 = ldf sqrt;
    base11 = ldf sqrt in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L87() else L88();
  L20(i21, i22, r125):
    st coh = r125;
    sym12 = ldf asin;
    base12 = ldf asin in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L98() else L99();
  L87():
    x51 = ld x;
    check L89() else D33();
  L88():
    r124 = dyn base11(<lang `[`(`$`(x, coh), , ind)>);
    goto L20(i6, i8, r124);
  D33():
    deopt 146 [i6, i8, x51];
  L22(i43, i44, r130):
    st cl = r130;
    lines2 = ldf lines;
    check L102() else D37();
  L89():
    x52 = force? x51;
    checkMissing(x52);
    c23 = `is.object`(x52);
    if c23 then L91() else L92(i6, i8, x52);
  L98():
    pmin1 = ldf pmin;
    check L100() else D35();
  L99():
    r129 = dyn base12(<lang pmin(0.9999, `*`(qt(ci, `-`(`/`(2.0, gg), 2.0)), sqrt(`/`(`*`(gg, `(`(`-`(`^`(coh, {
                      `-`(2.0)
                    }), 1.0))), `(`(`*`(2.0, `(`(`-`(1.0, gg))))))))>);
    goto L22(i21, i22, r129);
  D35():
    deopt 158 [i21, i22];
  D37():
    deopt 165 [i43, i44];
  L90(i29, i30, dx29):
    c24 = `is.object`(dx29);
    if c24 then L94() else L95(i29, i30, dx29);
  L91():
    dr26 = tryDispatchBuiltin.1("$", x52);
    dc13 = getTryDispatchBuiltinDispatched(dr26);
    if dc13 then L93() else L92(i6, i8, dr26);
  L92(i25, i26, x54):
    r126 = `$`(x54, <sym coh>);
    goto L90(i25, i26, r126);
  L100():
    p32 = prom<V +>{
      qt1 = ldf qt;
      p30 = prom<V +>{
        ci3 = ld ci;
        ci4 = force? ci3;
        checkMissing(ci4);
        return ci4;
      };
      p31 = prom<V +>{
        gg6 = ld gg;
        gg7 = force? gg6;
        checkMissing(gg7);
        r132 = `/`(2.0, gg7);
        r133 = `-`(r132, 2.0);
        return r133;
      };
      r135 = dyn qt1(p30, p31);
      sym13 = ldf sqrt;
      base13 = ldf sqrt in base;
      guard13 = `==`.4(sym13, base13);
      if guard13 then L1() else L2();
    L0(r139, r140):
      r148 = `*`(r139, r140);
      return r148;
    L1():
      gg8 = ld gg;
      gg9 = force? gg8;
      checkMissing(gg9);
      coh2 = ld coh;
      coh3 = force? coh2;
      checkMissing(coh3);
      r141 = `^`(coh3, -2.0);
      r142 = `-`(r141, 1.0);
      r143 = `*`(gg9, r142);
      gg10 = ld gg;
      gg11 = force? gg10;
      checkMissing(gg11);
      r144 = `-`(1.0, gg11);
      r145 = `*`(2.0, r144);
      r146 = `/`(r143, r145);
      r147 = sqrt(r146);
      goto L0(r135, r147);
    L2():
      r138 = dyn base13(<lang `/`(`*`(gg, `(`(`-`(`^`(coh, {
                  `-`(2.0)
                }), 1.0))), `(`(`*`(2.0, `(`(`-`(1.0, gg)))))>);
      goto L0(r135, r138);
    };
    r150 = dyn pmin1(0.9999, p32);
    check L101() else D36();
  L102():
    p33 = prom<V +>{
      x55 = ld x;
      x56 = force? x55;
      checkMissing(x56);
      c25 = `is.object`(x56);
      if c25 then L1() else L2(x56);
    L0(dx35):
      return dx35;
    L1():
      dr30 = tryDispatchBuiltin.1("$", x56);
      dc15 = getTryDispatchBuiltinDispatched(dr30);
      if dc15 then L3() else L2(dr30);
    L2(x58):
      r152 = `$`(x58, <sym freq>);
      goto L0(r152);
    L3():
      dx34 = getTryDispatchBuiltinValue(dr30);
      goto L0(dx34);
    };
    p34 = prom<V +>{
      x59 = ld x;
      x60 = force? x59;
      checkMissing(x60);
      c26 = `is.object`(x60);
      if c26 then L2() else L3(x60);
    L1(dx37):
      c27 = `is.object`(dx37);
      if c27 then L5() else L6();
    L2():
      dr32 = tryDispatchBuiltin.1("$", x60);
      dc16 = getTryDispatchBuiltinDispatched(dr32);
      if dc16 then L4() else L3(dr32);
    L3(x62):
      r154 = `$`(x62, <sym phase>);
      goto L1(r154);
    L0(dx41):
      cl4 = ld cl;
      cl5 = force? cl4;
      checkMissing(cl5);
      r156 = `+`(dx41, cl5);
      return r156;
    L4():
      dx36 = getTryDispatchBuiltinValue(dr32);
      goto L1(dx36);
    L5():
      dr34 = tryDispatchBuiltin.1("[", dx37);
      dc17 = getTryDispatchBuiltinDispatched(dr34);
      if dc17 then L7() else L6();
    L6():
      ind4 = ld ind;
      ind5 = force? ind4;
      __2 = ldf `[` in base;
      r155 = dyn __2(dx37, <missing>, ind5);
      goto L0(r155);
    L7():
      dx40 = getTryDispatchBuiltinValue(dr34);
      goto L0(dx40);
    };
    p35 = prom<V +>{
      ci_lty5 = ld `ci.lty`;
      ci_lty6 = force? ci_lty5;
      checkMissing(ci_lty6);
      return ci_lty6;
    };
    p36 = prom<V +>{
      ci_col5 = ld `ci.col`;
      ci_col6 = force? ci_col5;
      checkMissing(ci_col6);
      return ci_col6;
    };
    r160 = dyn lines2[, , lty, col](p33, p34, p35, p36);
    check L103() else D38();
  D36():
    deopt 161 [i21, i22, r150];
  D38():
    deopt 172 [i43, i44, r160];
  L21(i37, i38, dx33):
    r128 = sqrt(dx33);
    goto L20(i37, i38, r128);
  L93():
    dx28 = getTryDispatchBuiltinValue(dr26);
    goto L90(i6, i8, dx28);
  L94():
    dr28 = tryDispatchBuiltin.1("[", dx29);
    dc14 = getTryDispatchBuiltinDispatched(dr28);
    if dc14 then L96() else L95(i29, i30, dr28);
  L95(i33, i34, dx31):
    ind2 = ld ind;
    check L97() else D34();
  L101():
    r151 = asin(r150);
    goto L22(i21, i22, r151);
  L103():
    lines3 = ldf lines;
    check L104() else D39();
  D34():
    deopt 150 [i33, i34, dx31, ind2];
  D39():
    deopt 174 [i43, i44];
  L96():
    dx32 = getTryDispatchBuiltinValue(dr28);
    goto L21(i29, i30, dx32);
  L97():
    ind3 = force? ind2;
    __1 = ldf `[` in base;
    r127 = dyn __1(dx29, <missing>, ind3);
    goto L21(i33, i34, r127);
  L104():
    p37 = prom<V +>{
      x63 = ld x;
      x64 = force? x63;
      checkMissing(x64);
      c28 = `is.object`(x64);
      if c28 then L1() else L2(x64);
    L0(dx43):
      return dx43;
    L1():
      dr36 = tryDispatchBuiltin.1("$", x64);
      dc18 = getTryDispatchBuiltinDispatched(dr36);
      if dc18 then L3() else L2(dr36);
    L2(x66):
      r161 = `$`(x66, <sym freq>);
      goto L0(r161);
    L3():
      dx42 = getTryDispatchBuiltinValue(dr36);
      goto L0(dx42);
    };
    p38 = prom<V +>{
      x67 = ld x;
      x68 = force? x67;
      checkMissing(x68);
      c29 = `is.object`(x68);
      if c29 then L2() else L3(x68);
    L1(dx45):
      c30 = `is.object`(dx45);
      if c30 then L5() else L6();
    L2():
      dr38 = tryDispatchBuiltin.1("$", x68);
      dc19 = getTryDispatchBuiltinDispatched(dr38);
      if dc19 then L4() else L3(dr38);
    L3(x70):
      r163 = `$`(x70, <sym phase>);
      goto L1(r163);
    L0(dx49):
      cl6 = ld cl;
      cl7 = force? cl6;
      checkMissing(cl7);
      r165 = `-`(dx49, cl7);
      return r165;
    L4():
      dx44 = getTryDispatchBuiltinValue(dr38);
      goto L1(dx44);
    L5():
      dr40 = tryDispatchBuiltin.1("[", dx45);
      dc20 = getTryDispatchBuiltinDispatched(dr40);
      if dc20 then L7() else L6();
    L6():
      ind6 = ld ind;
      ind7 = force? ind6;
      __3 = ldf `[` in base;
      r164 = dyn __3(dx45, <missing>, ind7);
      goto L0(r164);
    L7():
      dx48 = getTryDispatchBuiltinValue(dr40);
      goto L0(dx48);
    };
    p39 = prom<V +>{
      ci_lty7 = ld `ci.lty`;
      ci_lty8 = force? ci_lty7;
      checkMissing(ci_lty8);
      return ci_lty8;
    };
    p40 = prom<V +>{
      ci_col7 = ld `ci.col`;
      ci_col8 = force? ci_col7;
      checkMissing(ci_col8);
      return ci_col8;
    };
    r169 = dyn lines3[, , lty, col](p37, p38, p39, p40);
    check L105() else D40();
  D40():
    deopt 181 [i43, i44, r169];
  L105():
    box = ldf box;
    check L106() else D41();
  D41():
    deopt 183 [i43, i44];
  L106():
    r170 = dyn box();
    check L107() else D42();
  D42():
    deopt 184 [i43, i44, r170];
  L107():
    i45 = ld i;
    check L108() else D43();
  D43():
    deopt 185 [i43, i44, i45];
  L108():
    i46 = force? i45;
    checkMissing(i46);
    r171 = `==`(i46, 1.0);
    c31 = `as.logical`(r171);
    if c31 then L109() else L23();
  L23():
    goto L24(i43, i44);
  L24(i51, i52):
    j10 = ld j;
    check L115() else D48();
  L109():
    axis = ldf axis;
    check L110() else D44();
  D44():
    deopt 190 [i43, i44];
  D48():
    deopt 204 [i51, i52, j10];
  L110():
    r172 = dyn axis[, xpd](2.0, NA_LGL);
    check L111() else D45();
  L115():
    j11 = force? j10;
    checkMissing(j11);
    nser12 = ld nser;
    check L116() else D49();
  D45():
    deopt 194 [i43, i44, r172];
  D49():
    deopt 205 [i51, i52, j11, nser12];
  L111():
    title1 = ldf title;
    check L112() else D46();
  L116():
    nser13 = force? nser12;
    checkMissing(nser13);
    r178 = `==`(j11, nser13);
    c34 = `as.logical`(r178);
    if c34 then L117() else L25();
  D46():
    deopt 196 [i43, i44];
  L25():
    goto L26(i51, i52);
  L26(i59, i60):
    mtext = ldf mtext;
    check L123() else D54();
  L112():
    p41 = prom<V +>{
      x71 = ld x;
      x72 = force? x71;
      checkMissing(x72);
      c32 = `is.object`(x72);
      if c32 then L2() else L3(x72);
    L1(dx51):
      c33 = `is.object`(dx51);
      if c33 then L5() else L6(dx51);
    L2():
      dr42 = tryDispatchBuiltin.1("$", x72);
      dc21 = getTryDispatchBuiltinDispatched(dr42);
      if dc21 then L4() else L3(dr42);
    L3(x74):
      r173 = `$`(x74, <sym snames>);
      goto L1(r173);
    L0(dx55):
      return dx55;
    L4():
      dx50 = getTryDispatchBuiltinValue(dr42);
      goto L1(dx50);
    L5():
      dr44 = tryDispatchBuiltin.1("[", dx51);
      dc22 = getTryDispatchBuiltinDispatched(dr44);
      if dc22 then L7() else L6(dr44);
    L6(dx53):
      j8 = ld j;
      j9 = force? j8;
      __4 = ldf `[` in base;
      r174 = dyn __4(dx53, j9);
      goto L0(r174);
    L7():
      dx54 = getTryDispatchBuiltinValue(dr44);
      goto L0(dx54);
    };
    r176 = dyn title1[ylab, xpd](p41, NA_LGL);
    check L113() else D47();
  L117():
    axis1 = ldf axis;
    check L118() else D50();
  D47():
    deopt 201 [i43, i44, r176];
  D50():
    deopt 209 [i51, i52];
  D54():
    deopt 224 [i59, i60];
  L113():
    goto L24(i43, i44);
  L118():
    r179 = dyn axis1[, xpd](1.0, NA_LGL);
    check L119() else D51();
  L123():
    p43 = prom<V +>{
      main5 = ld main;
      main6 = force? main5;
      checkMissing(main6);
      return main6;
    };
    p44 = prom<V +>{
      par2 = ldf par;
      r186 = dyn par2("cex.main");
      return r186;
    };
    p45 = prom<V +>{
      par3 = ldf par;
      r188 = dyn par3("font.main");
      return r188;
    };
    r190 = dyn mtext[, , , , , cex, font](p43, 3.0, 3.0, TRUE, 0.5, p44, p45);
    check L124() else D55();
  D51():
    deopt 213 [i51, i52, r179];
  D55():
    deopt 234 [i59, i60, r190];
  L119():
    title2 = ldf title;
    check L120() else D52();
  L124():
    goto L19(i59, i60);
  D52():
    deopt 215 [i51, i52];
  L120():
    p42 = prom<V +>{
      x75 = ld x;
      x76 = force? x75;
      checkMissing(x76);
      c35 = `is.object`(x76);
      if c35 then L2() else L3(x76);
    L1(dx57):
      c36 = `is.object`(dx57);
      if c36 then L5() else L6(dx57);
    L2():
      dr46 = tryDispatchBuiltin.1("$", x76);
      dc23 = getTryDispatchBuiltinDispatched(dr46);
      if dc23 then L4() else L3(dr46);
    L3(x78):
      r180 = `$`(x78, <sym snames>);
      goto L1(r180);
    L0(dx61):
      return dx61;
    L4():
      dx56 = getTryDispatchBuiltinValue(dr46);
      goto L1(dx56);
    L5():
      dr48 = tryDispatchBuiltin.1("[", dx57);
      dc24 = getTryDispatchBuiltinDispatched(dr48);
      if dc24 then L7() else L6(dr48);
    L6(dx59):
      i57 = ld i;
      i58 = force? i57;
      __5 = ldf `[` in base;
      r181 = dyn __5(dx59, i58);
      goto L0(r181);
    L7():
      dx60 = getTryDispatchBuiltinValue(dr48);
      goto L0(dx60);
    };
    r183 = dyn title2[xlab, xpd](p42, NA_LGL);
    check L121() else D53();
  D53():
    deopt 220 [i51, i52, r183];
  L121():
    goto L26(i51, i52);
  }
}