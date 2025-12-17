fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg attach:cls, reg cars:*, reg cars1:V, reg p1:p(V +), reg r6:V, reg smooth_spline:cls, reg speed:*, reg speed1:V, reg p2:p(V +), reg dist:*, reg dist1:V, reg p3:p(V +), reg r9:V, reg print_default:cls, reg cars_spl:*, reg cars_spl1:V, reg p4:p(V +), reg r11:V, reg r12:cls, reg unique:cls, reg sort:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r13:V, reg r14:V, reg seq:cls, reg r15:V, reg unique1:cls, reg speed2:*, reg speed3:V, reg p5:p(V +), reg r17:V, reg c:cls, reg r18:V, reg p6:p(V +), reg r20:V, reg p7:p(V +), reg r22:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r23:V, reg r24:V, reg kn:*, reg kn1:V, reg xx:*, reg xx1:V, reg match:cls, reg r25:V, reg par:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r26:V, reg r27:V, reg c1:cls, reg r28:V, reg p8:p(V +), reg r30:V, reg plot:cls, reg speed4:*, reg speed5:V, reg p9:p(V +), reg dist2:*, reg dist3:V, reg p10:p(V +), reg sym4:cls, reg base4:cls, reg guard4:L, reg r33:V, reg r34:V, reg xx2:*, reg xx3:V, reg range:cls, reg r35:V, reg p11:p(V +), reg r37:V, reg lines:cls, reg predict:cls, reg cars_spl2:*, reg cars_spl3:V, reg p12:p(V +), reg xx4:*, reg xx5:V, reg p13:p(V +), reg r40:V, reg p14:p(V +), reg r42:V, reg points:cls, reg kn2:*, reg kn3:V, reg p15:p(V +), reg pp:*, reg pp1:V, reg c2:L, reg pp3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r44:V, reg c3:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg i_kn:*, reg i_kn1:V, reg __:cls, reg r45:V, reg p16:p(V +), reg r47:V, reg mtext:cls, reg r48:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c4:L, reg x:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r49:V, reg i7:I, reg r50:V, reg pp4:*, reg pp5:V, reg c5:L, reg i9:I, reg pp7:V, reg dr4:V, reg dc2:L, reg dx6:V, reg i11:I, reg dx7:V, reg r51:V, reg length:cls, reg r52:V, reg plot1:cls, reg pp8:*, reg pp9:V, reg c6:L, reg pp11:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg r53:V, reg p17:p(V +), reg diff_quot:cls, reg pp12:*, reg pp13:V, reg c7:L, reg pp15:V, reg dr8:V, reg dc4:L, reg dx10:V, reg dx11:V, reg r55:V, reg p18:p(V +), reg pp16:*, reg pp17:V, reg c8:L, reg pp19:V, reg dr10:V, reg dc5:L, reg dx12:V, reg dx13:V, reg r57:V, reg p19:p(V +), reg r59:V, reg p20:p(V +), reg paste0:cls, reg paste1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r61:V, reg r62:V, reg rep:cls, reg r63:V, reg p21:p(V +), reg r65:V, reg p22:p(V +), reg r67:V, reg p23:p(V +), reg r69:V, reg mtext1:cls, reg r70:V, reg lines1:cls, reg predict1:cls, reg cars_spl4:*, reg cars_spl5:V, reg p24:p(V +), reg xx6:*, reg xx7:V, reg p25:p(V +), reg d:*, reg d1:V, reg p26:p(V +), reg r74:V, reg p27:p(V +), reg r76:V, reg print:cls, reg pp20:*, reg pp21:V, reg p28:p(V +), reg r78:V, reg points1:cls, reg kn4:*, reg kn5:V, reg p29:p(V +), reg pp22:*, reg pp23:V, reg c9:L, reg pp25:V, reg dr12:V, reg dc6:L, reg dx14:V, reg dx15:V, reg r80:V, reg c10:L, reg dx17:V, reg dr14:V, reg dc7:L, reg dx18:V, reg dx19:V, reg i_kn2:*, reg i_kn3:V, reg __1:cls, reg r81:V, reg p30:p(V +), reg r83:V, reg abline:cls, reg r84:V, reg detach:cls, reg r85:V, reg par1:cls, reg op:*, reg op1:V, reg p31:p(V +), reg r87:V |
    mkenv;
    r = clos inner1836514972;
    st `predict.smooth.spline` = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0():
    attach = ldf attach;
    check L9() else D2();
  L5():
    require = ldf require;
    check L7() else D0();
  L6():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
  L7():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L8() else D1();
  L9():
    p1 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r6 = dyn attach(p1);
    check L10() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L8():
    goto L0();
  L10():
    smooth_spline = ldf `smooth.spline`;
    check L11() else D4();
  D4():
    deopt 13 [];
  L11():
    p2 = prom<V +>{
      speed = ld speed;
      speed1 = force? speed;
      checkMissing(speed1);
      return speed1;
    };
    p3 = prom<V +>{
      dist = ld dist;
      dist1 = force? dist;
      checkMissing(dist1);
      return dist1;
    };
    r9 = dyn smooth_spline[, , df](p2, p3, 6.4);
    check L12() else D5();
  D5():
    deopt 18 [r9];
  L12():
    st `cars.spl` = r9;
    print_default = ldf `print.default`;
    check L13() else D6();
  D6():
    deopt 21 [];
  L13():
    p4 = prom<V +>{
      cars_spl = ld `cars.spl`;
      cars_spl1 = force? cars_spl;
      checkMissing(cars_spl1);
      return cars_spl1;
    };
    r11 = dyn print_default(p4);
    check L14() else D7();
  D7():
    deopt 23 [r11];
  L14():
    r12 = clos inner799576941;
    st `diff.quot` = r12;
    unique = ldf unique;
    check L15() else D8();
  D8():
    deopt 28 [];
  L15():
    p7 = prom<V +>{
      sort = ldf sort;
      p6 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r14):
        return r14;
      L1():
        seq = ldf seq;
        r15 = dyn seq[, , by](0.0, 30.0, 0.2);
        unique1 = ldf unique;
        p5 = prom<V +>{
          speed2 = ld speed;
          speed3 = force? speed2;
          checkMissing(speed3);
          return speed3;
        };
        r17 = dyn unique1(p5);
        st kn = r17;
        c = ldf c in base;
        r18 = dyn c(r15, r17);
        goto L0(r18);
      L2():
        r13 = dyn base1(<lang seq(0.0, 30.0, by=0.2)>, <lang `<-`(kn, unique(speed))>);
        goto L0(r13);
      };
      r20 = dyn sort(p6);
      return r20;
    };
    r22 = dyn unique(p7);
    check L16() else D9();
  D9():
    deopt 30 [r22];
  L16():
    st xx = r22;
    sym2 = ldf match;
    base2 = ldf match in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L17() else L18();
  L1(r24):
    st `i.kn` = r24;
    par = ldf par;
    check L22() else D13();
  L17():
    kn = ld kn;
    check L19() else D10();
  L18():
    r23 = dyn base2(<sym kn>, <sym xx>);
    goto L1(r23);
  D10():
    deopt 34 [kn];
  D13():
    deopt 44 [];
  L19():
    kn1 = force? kn;
    checkMissing(kn1);
    xx = ld xx;
    check L20() else D11();
  L22():
    p8 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r27):
      return r27;
    L1():
      c1 = ldf c in base;
      r28 = dyn c1(2.0, 2.0);
      goto L0(r28);
    L2():
      r26 = dyn base3(2.0, 2.0);
      goto L0(r26);
    };
    r30 = dyn par[mfrow](p8);
    check L23() else D14();
  D11():
    deopt 36 [xx];
  D14():
    deopt 47 [r30];
  L20():
    xx1 = force? xx;
    checkMissing(xx1);
    match = ldf match in base;
    r25 = dyn match(kn1, xx1, NA_INT, NULL);
    check L21() else D12();
  L23():
    st op = r30;
    plot = ldf plot;
    check L24() else D15();
  D12():
    deopt 41 [r25];
  D15():
    deopt 50 [];
  L21():
    goto L1(r25);
  L24():
    p9 = prom<V +>{
      speed4 = ld speed;
      speed5 = force? speed4;
      checkMissing(speed5);
      return speed5;
    };
    p10 = prom<V +>{
      dist2 = ld dist;
      dist3 = force? dist2;
      checkMissing(dist3);
      return dist3;
    };
    p11 = prom<V +>{
      sym4 = ldf range;
      base4 = ldf range in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L1() else L2();
    L0(r34):
      return r34;
    L1():
      xx2 = ld xx;
      xx3 = force? xx2;
      checkMissing(xx3);
      range = ldf range in base;
      r35 = dyn range(xx3);
      goto L0(r35);
    L2():
      r33 = dyn base4(<sym xx>);
      goto L0(r33);
    };
    r37 = dyn plot[, , xlim, main](p9, p10, p11, "Smooth.spline & derivatives");
    check L25() else D16();
  D16():
    deopt 57 [r37];
  L25():
    lines = ldf lines;
    check L26() else D17();
  D17():
    deopt 59 [];
  L26():
    p14 = prom<V +>{
      predict = ldf predict;
      p12 = prom<V +>{
        cars_spl2 = ld `cars.spl`;
        cars_spl3 = force? cars_spl2;
        checkMissing(cars_spl3);
        return cars_spl3;
      };
      p13 = prom<V +>{
        xx4 = ld xx;
        xx5 = force? xx4;
        checkMissing(xx5);
        return xx5;
      };
      r40 = dyn predict(p12, p13);
      st pp = r40;
      invisible.0();
      return r40;
    };
    r42 = dyn lines[, col](p14, "red");
    check L27() else D18();
  D18():
    deopt 63 [r42];
  L27():
    points = ldf points;
    check L28() else D19();
  D19():
    deopt 65 [];
  L28():
    p15 = prom<V +>{
      kn2 = ld kn;
      kn3 = force? kn2;
      checkMissing(kn3);
      return kn3;
    };
    p16 = prom<V +>{
      pp = ld pp;
      pp1 = force? pp;
      checkMissing(pp1);
      c2 = `is.object`(pp1);
      if c2 then L2() else L3(pp1);
    L1(dx1):
      c3 = `is.object`(dx1);
      if c3 then L5() else L6(dx1);
    L2():
      dr = tryDispatchBuiltin.1("$", pp1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L4() else L3(dr);
    L3(pp3):
      r44 = `$`(pp3, <sym y>);
      goto L1(r44);
    L0(dx5):
      return dx5;
    L4():
      dx = getTryDispatchBuiltinValue(dr);
      goto L1(dx);
    L5():
      dr2 = tryDispatchBuiltin.1("[", dx1);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L7() else L6(dr2);
    L6(dx3):
      i_kn = ld `i.kn`;
      i_kn1 = force? i_kn;
      __ = ldf `[` in base;
      r45 = dyn __(dx3, i_kn1);
      goto L0(r45);
    L7():
      dx4 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx4);
    };
    r47 = dyn points[, , pch, col](p15, p16, 3.0, "dark red");
    check L29() else D20();
  D20():
    deopt 72 [r47];
  L29():
    mtext = ldf mtext;
    check L30() else D21();
  D21():
    deopt 74 [];
  L30():
    r48 = dyn mtext[, col]("s(x)", "red");
    check L31() else D22();
  D22():
    deopt 78 [r48];
  L31():
    s = toForSeq(<int 1, 2, 3>);
    l = length(s);
    i = 0;
    goto L2(i);
  L2(i1):
    i2 = `+`.1(i1, 1);
    c4 = `<`.1(l, i2);
    if c4 then L32() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st d = x;
    sym5 = ldf length;
    base5 = ldf length in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L33() else L34();
  L32():
    detach = ldf detach;
    check L53() else D37();
  D37():
    deopt 144 [];
  L3(i7, r50):
    st n = r50;
    plot1 = ldf plot;
    check L41() else D25();
  L33():
    pp4 = ld pp;
    check L35() else D23();
  L34():
    r49 = dyn base5(<lang `$`(pp, x)>);
    goto L3(i2, r49);
  L53():
    r85 = dyn detach();
    check L54() else D38();
  D23():
    deopt 83 [i2, pp4];
  D25():
    deopt 90 [i7];
  D38():
    deopt 145 [r85];
  L35():
    pp5 = force? pp4;
    checkMissing(pp5);
    c5 = `is.object`(pp5);
    if c5 then L37() else L38(i2, pp5);
  L41():
    p17 = prom<V +>{
      pp8 = ld pp;
      pp9 = force? pp8;
      checkMissing(pp9);
      c6 = `is.object`(pp9);
      if c6 then L1() else L2(pp9);
    L0(dx9):
      return dx9;
    L1():
      dr6 = tryDispatchBuiltin.1("$", pp9);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(pp11):
      r53 = `$`(pp11, <sym x>);
      goto L0(r53);
    L3():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    };
    p20 = prom<V +>{
      diff_quot = ldf `diff.quot`;
      p18 = prom<V +>{
        pp12 = ld pp;
        pp13 = force? pp12;
        checkMissing(pp13);
        c7 = `is.object`(pp13);
        if c7 then L1() else L2(pp13);
      L0(dx11):
        return dx11;
      L1():
        dr8 = tryDispatchBuiltin.1("$", pp13);
        dc4 = getTryDispatchBuiltinDispatched(dr8);
        if dc4 then L3() else L2(dr8);
      L2(pp15):
        r55 = `$`(pp15, <sym x>);
        goto L0(r55);
      L3():
        dx10 = getTryDispatchBuiltinValue(dr8);
        goto L0(dx10);
      };
      p19 = prom<V +>{
        pp16 = ld pp;
        pp17 = force? pp16;
        checkMissing(pp17);
        c8 = `is.object`(pp17);
        if c8 then L1() else L2(pp17);
      L0(dx13):
        return dx13;
      L1():
        dr10 = tryDispatchBuiltin.1("$", pp17);
        dc5 = getTryDispatchBuiltinDispatched(dr10);
        if dc5 then L3() else L2(dr10);
      L2(pp19):
        r57 = `$`(pp19, <sym y>);
        goto L0(r57);
      L3():
        dx12 = getTryDispatchBuiltinValue(dr10);
        goto L0(dx12);
      };
      r59 = dyn diff_quot(p18, p19);
      return r59;
    };
    p23 = prom<V +>{
      paste0 = ldf paste0;
      p22 = prom<V +>{
        paste1 = ldf paste;
        p21 = prom<V +>{
          sym6 = ldf rep;
          base6 = ldf rep in base;
          guard6 = `==`.4(sym6, base6);
          if guard6 then L1() else L2();
        L0(r62):
          return r62;
        L1():
          rep = ldf rep in base;
          r63 = dyn rep("'", <sym d>);
          goto L0(r63);
        L2():
          r61 = dyn base6("'", <sym d>);
          goto L0(r61);
        };
        r65 = dyn paste1[, collapse](p21, "");
        return r65;
      };
      r67 = dyn paste0("s", p22, "(x)");
      return r67;
    };
    r69 = dyn plot1[, , type, xlab, ylab, col, `col.main`, main](p17, p20, "l", "x", "", "blue", "red", p23);
    check L42() else D26();
  L54():
    par1 = ldf par;
    check L55() else D39();
  D26():
    deopt 105 [i7, r69];
  D39():
    deopt 147 [];
  L36(i11, dx7):
    length = ldf length in base;
    r52 = dyn length(dx7);
    check L40() else D24();
  L37():
    dr4 = tryDispatchBuiltin.1("$", pp5);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L39() else L38(i2, dr4);
  L38(i9, pp7):
    r51 = `$`(pp7, <sym x>);
    goto L36(i9, r51);
  L42():
    mtext1 = ldf mtext;
    check L43() else D27();
  L55():
    p31 = prom<V +>{
      op = ld op;
      op1 = force? op;
      checkMissing(op1);
      return op1;
    };
    r87 = dyn par1(p31);
    check L56() else D40();
  D24():
    deopt 87 [i11, r52];
  D27():
    deopt 107 [i7];
  D40():
    deopt 149 [r87];
  L39():
    dx6 = getTryDispatchBuiltinValue(dr4);
    goto L36(i2, dx6);
  L40():
    goto L3(i11, r52);
  L43():
    r70 = dyn mtext1[, col]("Difference quotient approx.(last)", "blue");
    check L44() else D28();
  L56():
    popenv;
    return r87;
  D28():
    deopt 111 [i7, r70];
  L44():
    lines1 = ldf lines;
    check L45() else D29();
  D29():
    deopt 113 [i7];
  L45():
    p27 = prom<V +>{
      predict1 = ldf predict;
      p24 = prom<V +>{
        cars_spl4 = ld `cars.spl`;
        cars_spl5 = force? cars_spl4;
        checkMissing(cars_spl5);
        return cars_spl5;
      };
      p25 = prom<V +>{
        xx6 = ld xx;
        xx7 = force? xx6;
        checkMissing(xx7);
        return xx7;
      };
      p26 = prom<V +>{
        d = ld d;
        d1 = force? d;
        checkMissing(d1);
        return d1;
      };
      r74 = dyn predict1[, , deriv](p24, p25, p26);
      st pp = r74;
      invisible.0();
      return r74;
    };
    r76 = dyn lines1[, col](p27, "red");
    check L46() else D30();
  D30():
    deopt 117 [i7, r76];
  L46():
    print = ldf print;
    check L47() else D31();
  D31():
    deopt 119 [i7];
  L47():
    p28 = prom<V +>{
      pp20 = ld pp;
      pp21 = force? pp20;
      checkMissing(pp21);
      return pp21;
    };
    r78 = dyn print(p28);
    check L48() else D32();
  D32():
    deopt 121 [i7, r78];
  L48():
    points1 = ldf points;
    check L49() else D33();
  D33():
    deopt 123 [i7];
  L49():
    p29 = prom<V +>{
      kn4 = ld kn;
      kn5 = force? kn4;
      checkMissing(kn5);
      return kn5;
    };
    p30 = prom<V +>{
      pp22 = ld pp;
      pp23 = force? pp22;
      checkMissing(pp23);
      c9 = `is.object`(pp23);
      if c9 then L2() else L3(pp23);
    L1(dx15):
      c10 = `is.object`(dx15);
      if c10 then L5() else L6(dx15);
    L2():
      dr12 = tryDispatchBuiltin.1("$", pp23);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L4() else L3(dr12);
    L3(pp25):
      r80 = `$`(pp25, <sym y>);
      goto L1(r80);
    L0(dx19):
      return dx19;
    L4():
      dx14 = getTryDispatchBuiltinValue(dr12);
      goto L1(dx14);
    L5():
      dr14 = tryDispatchBuiltin.1("[", dx15);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L7() else L6(dr14);
    L6(dx17):
      i_kn2 = ld `i.kn`;
      i_kn3 = force? i_kn2;
      __1 = ldf `[` in base;
      r81 = dyn __1(dx17, i_kn3);
      goto L0(r81);
    L7():
      dx18 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx18);
    };
    r83 = dyn points1[, , pch, col](p29, p30, 3.0, "dark red");
    check L50() else D34();
  D34():
    deopt 130 [i7, r83];
  L50():
    abline = ldf abline;
    check L51() else D35();
  D35():
    deopt 132 [i7];
  L51():
    r84 = dyn abline[h, lty, col](0.0, 3.0, "gray");
    check L52() else D36();
  D36():
    deopt 139 [i7, r84];
  L52():
    goto L2(i7);
  }
}
fun inner1836514972(object, x, deriv, `...`) {
  (reg object:*, reg x:*, reg deriv:*, reg ddd:dots) -+> V { var object:*, var x:*, var deriv:*, reg deriv_isMissing:L, reg deriv_orDefault:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg missing:cls, reg r2:V, reg c:L, reg deriv1:*, reg deriv2:V, reg r3:V, reg c1:L, reg object1:*, reg object2:V, reg c2:L, reg object4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg object7:V, reg r5:V, reg c3:cls, reg r6:V, reg __:cls, reg r7:V, reg object8:*, reg object9:V, reg c4:L, reg object11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r10:V, reg object12:*, reg object13:V, reg c5:L, reg object15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r12:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg fit:*, reg fit1:V, reg c6:V, reg c7:L, reg stop:cls, reg r15:V, reg predict:cls, reg fit2:*, reg fit3:V, reg p:p(V +), reg x1:*, reg x2:V, reg p1:p(V +), reg deriv3:*, reg deriv4:V, reg p2:p(V +), reg ddd1:dots?, reg r19:V |
    mkenv;
    st object = object;
    st x = x;
    deriv_isMissing = missing.0(deriv);
    if deriv_isMissing then L0(0.0) else L0(deriv);
  L0(deriv_orDefault):
    st deriv = deriv_orDefault;
    st `...` = ddd;
    sym = ldf missing;
    base = ldf missing in base;
    guard = `==`.4(sym, base);
    if guard then L10() else L11();
  L1(r1):
    c = `as.logical`(r1);
    if c then L12() else L2();
  L10():
    missing = ldf missing in base;
    r2 = dyn missing(<sym x>);
    goto L1(r2);
  L11():
    r = dyn base(<sym x>);
    goto L1(r);
  L2():
    goto L7();
  L7():
    object12 = ld object;
    check L30() else D4();
  L12():
    deriv1 = ld deriv;
    check L13() else D0();
  D0():
    deopt 3 [deriv1];
  D4():
    deopt 23 [object12];
  L13():
    deriv2 = force? deriv1;
    checkMissing(deriv2);
    r3 = `==`(deriv2, 0.0);
    c1 = `as.logical`(r3);
    if c1 then L14() else L3();
  L30():
    object13 = force? object12;
    checkMissing(object13);
    c5 = `is.object`(object13);
    if c5 then L32() else L33(object13);
  L3():
    object8 = ld object;
    check L24() else D3();
  L14():
    object1 = ld object;
    check L15() else D1();
  L31(dx5):
    st fit = dx5;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L35() else L36();
  L32():
    dr4 = tryDispatchBuiltin.1("$", object13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L34() else L33(dr4);
  L33(object15):
    r12 = `$`(object15, <sym fit>);
    goto L31(r12);
  D1():
    deopt 7 [object1];
  D3():
    deopt 17 [object8];
  L8(r14):
    c7 = `as.logical`(r14);
    if c7 then L38() else L9();
  L15():
    object2 = force? object1;
    checkMissing(object2);
    c2 = `is.object`(object2);
    if c2 then L16() else L17(object2);
  L24():
    object9 = force? object8;
    checkMissing(object9);
    c4 = `is.object`(object9);
    if c4 then L26() else L27(object9);
  L34():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L31(dx4);
  L35():
    fit = ld fit;
    check L37() else D5();
  L36():
    r13 = dyn base2(<sym fit>);
    goto L8(r13);
  D5():
    deopt 28 [fit];
  L4(dx1):
    popenv;
    return dx1;
  L9():
    predict = ldf predict;
    check L42() else D8();
  L16():
    dr = tryDispatchBuiltin.1("[", object2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L18() else L17(dr);
  L17(object4):
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L19() else L20();
  L25(dx3):
    st x = dx3;
    goto L7();
  L26():
    dr2 = tryDispatchBuiltin.1("$", object9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L28() else L27(dr2);
  L27(object11):
    r10 = `$`(object11, <sym x>);
    goto L25(r10);
  L37():
    fit1 = force? fit;
    checkMissing(fit1);
    c6 = `==`(fit1, NULL);
    goto L8(c6);
  L38():
    stop = ldf stop;
    check L39() else D6();
  D6():
    deopt 32 [];
  D8():
    deopt 36 [];
  L5(object7, r5):
    __ = ldf `[` in base;
    r7 = dyn __(object7, r5);
    goto L4(r7);
  L18():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L19():
    c3 = ldf c in base;
    r6 = dyn c3("x", "y");
    check L21() else D2();
  L20():
    r4 = dyn base1("x", "y");
    goto L5(object4, r4);
  L28():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L25(dx2);
  L39():
    r15 = dyn stop("not a valid \"smooth.spline\" object");
    check L40() else D7();
  L42():
    p = prom<V +>{
      fit2 = ld fit;
      fit3 = force? fit2;
      checkMissing(fit3);
      return fit3;
    };
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p2 = prom<V +>{
      deriv3 = ld deriv;
      deriv4 = force? deriv3;
      checkMissing(deriv4);
      return deriv4;
    };
    ddd1 = ld `...`;
    r19 = dyn predict[, , , `...`](p, p1, p2, ddd1);
    check L43() else D9();
  D2():
    deopt 14 [object4, r6];
  D7():
    deopt 34 [r15];
  D9():
    deopt 41 [r19];
  L21():
    goto L5(object4, r6);
  L40():
    popenv;
    return r15;
  L43():
    popenv;
    return r19;
  }
}
fun inner799576941(x, y) {
  (reg x:*, reg y:*) -+> V { var x:*, var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg length:cls, reg r2:V, reg n:*, reg n1:V, reg r3:V, reg n2:*, reg n3:V, reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg diff:cls, reg y1:*, reg y2:V, reg c:L, reg y4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg i1:*, reg i2:V, reg __:cls, reg r7:V, reg p:p(V +), reg r9:V, reg diff1:cls, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg i3:*, reg i4:V, reg __1:cls, reg r10:V, reg p1:p(V +), reg r12:V, reg r13:V, reg y5:*, reg y6:V, reg c2:L, reg y8:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg i5:*, reg i6:V, reg r14:V, reg __2:cls, reg r15:V, reg y9:*, reg y10:V, reg c3:L, reg dx7:V, reg y12:V, reg dr6:V, reg dc3:L, reg dx9:V, reg dx10:V, reg dx11:V, reg i7:*, reg i8:V, reg r16:V, reg __3:cls, reg r17:V, reg r18:V, reg x7:*, reg x8:V, reg c4:L, reg r20:V, reg x10:V, reg dr8:V, reg dc4:L, reg dx12:V, reg r22:V, reg dx13:V, reg i9:*, reg i10:V, reg r23:V, reg __4:cls, reg r24:V, reg x11:*, reg x12:V, reg c5:L, reg r26:V, reg dx15:V, reg x14:V, reg dr10:V, reg dc5:L, reg dx17:V, reg r28:V, reg dx18:V, reg dx19:V, reg i11:*, reg i12:V, reg r29:V, reg __5:cls, reg r30:V, reg r31:V, reg r32:V, reg diff2:cls, reg y13:*, reg y14:V, reg c6:L, reg y16:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg i13:*, reg i14:V, reg __6:cls, reg r33:V, reg p2:p(V +), reg r35:V, reg diff3:cls, reg x15:*, reg x16:V, reg c7:L, reg x18:V, reg dr14:V, reg dc7:L, reg dx22:V, reg dx23:V, reg i15:*, reg i16:V, reg __7:cls, reg r36:V, reg p3:p(V +), reg r38:V, reg r39:V, reg c8:cls, reg r40:V |
    mkenv;
    st x = x;
    st y = y;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0(r1):
    st n = r1;
    st i1 = <int 1, 2>;
    n = ld n;
    check L10() else D2();
  L6():
    x1 = ld x;
    check L8() else D0();
  L7():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  D2():
    deopt 10 [n];
  L8():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r2 = dyn length(x2);
    check L9() else D1();
  L10():
    n1 = force? n;
    checkMissing(n1);
    r3 = `-`(n1, 1.0);
    n2 = ld n;
    check L11() else D3();
  D1():
    deopt 5 [r2];
  D3():
    deopt 13 [r3, n2];
  L9():
    goto L0(r2);
  L11():
    n3 = force? n2;
    checkMissing(n3);
    r4 = `:`(r3, n3);
    st i2 = r4;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  L1(r6):
    popenv;
    return r6;
  L12():
    diff = ldf diff;
    check L14() else D4();
  L13():
    r5 = dyn base1(<lang `/`(diff(`[`(y, i1)), diff(`[`(x, i1)))>, <lang `/`(`(`(`-`(`[`(y, `-`(i1)), `[`(y, `-`(i2)))), `(`(`-`(`[`(x, `-`(i1)), `[`(x, `-`(i2)))))>, <lang `/`(diff(`[`(y, i2)), diff(`[`(x, i2)))>);
    goto L1(r5);
  D4():
    deopt 20 [];
  L14():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      c = `is.object`(y2);
      if c then L1() else L2(y2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", y2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(y4):
      i1 = ld i1;
      i2 = force? i1;
      __ = ldf `[` in base;
      r7 = dyn __(y4, i2);
      goto L0(r7);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r9 = dyn diff(p);
    check L15() else D5();
  D5():
    deopt 22 [r9];
  L15():
    diff1 = ldf diff;
    check L16() else D6();
  D6():
    deopt 23 [r9];
  L16():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      c1 = `is.object`(x4);
      if c1 then L1() else L2(x4);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x4);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x6):
      i3 = ld i1;
      i4 = force? i3;
      __1 = ldf `[` in base;
      r10 = dyn __1(x6, i4);
      goto L0(r10);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r12 = dyn diff1(p1);
    check L17() else D7();
  D7():
    deopt 25 [r9, r12];
  L17():
    r13 = `/`(r9, r12);
    y5 = ld y;
    check L18() else D8();
  D8():
    deopt 27 [y5];
  L18():
    y6 = force? y5;
    checkMissing(y6);
    c2 = `is.object`(y6);
    if c2 then L19() else L20(y6);
  L2(dx5):
    y9 = ld y;
    check L23() else D10();
  L19():
    dr4 = tryDispatchBuiltin.1("[", y6);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L21() else L20(dr4);
  L20(y8):
    i5 = ld i1;
    check L22() else D9();
  D9():
    deopt 29 [y8, i5];
  D10():
    deopt 32 [dx5, y9];
  L21():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L2(dx4);
  L22():
    i6 = force? i5;
    checkMissing(i6);
    r14 = `-`(<missing>, i6);
    __2 = ldf `[` in base;
    r15 = dyn __2(y8, r14);
    goto L2(r15);
  L23():
    y10 = force? y9;
    checkMissing(y10);
    c3 = `is.object`(y10);
    if c3 then L24() else L25(dx5, y10);
  L3(dx10, dx11):
    r18 = `-`(dx10, dx11);
    x7 = ld x;
    check L28() else D12();
  L24():
    dr6 = tryDispatchBuiltin.1("[", y10);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L26() else L25(dx5, dr6);
  L25(dx7, y12):
    i7 = ld i2;
    check L27() else D11();
  D11():
    deopt 34 [dx7, y12, i7];
  D12():
    deopt 38 [r18, x7];
  L26():
    dx9 = getTryDispatchBuiltinValue(dr6);
    goto L3(dx5, dx9);
  L27():
    i8 = force? i7;
    checkMissing(i8);
    r16 = `-`(<missing>, i8);
    __3 = ldf `[` in base;
    r17 = dyn __3(y12, r16);
    goto L3(dx7, r17);
  L28():
    x8 = force? x7;
    checkMissing(x8);
    c4 = `is.object`(x8);
    if c4 then L29() else L30(r18, x8);
  L4(r22, dx13):
    x11 = ld x;
    check L33() else D14();
  L29():
    dr8 = tryDispatchBuiltin.1("[", x8);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L31() else L30(r18, dr8);
  L30(r20, x10):
    i9 = ld i1;
    check L32() else D13();
  D13():
    deopt 40 [r20, x10, i9];
  D14():
    deopt 43 [r22, dx13, x11];
  L31():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L4(r18, dx12);
  L32():
    i10 = force? i9;
    checkMissing(i10);
    r23 = `-`(<missing>, i10);
    __4 = ldf `[` in base;
    r24 = dyn __4(x10, r23);
    goto L4(r20, r24);
  L33():
    x12 = force? x11;
    checkMissing(x12);
    c5 = `is.object`(x12);
    if c5 then L34() else L35(r22, dx13, x12);
  L5(r28, dx18, dx19):
    r31 = `-`(dx18, dx19);
    r32 = `/`(r28, r31);
    diff2 = ldf diff;
    check L38() else D16();
  L34():
    dr10 = tryDispatchBuiltin.1("[", x12);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L36() else L35(r22, dx13, dr10);
  L35(r26, dx15, x14):
    i11 = ld i2;
    check L37() else D15();
  D15():
    deopt 45 [r26, dx15, x14, i11];
  D16():
    deopt 52 [];
  L36():
    dx17 = getTryDispatchBuiltinValue(dr10);
    goto L5(r22, dx13, dx17);
  L37():
    i12 = force? i11;
    checkMissing(i12);
    r29 = `-`(<missing>, i12);
    __5 = ldf `[` in base;
    r30 = dyn __5(x14, r29);
    goto L5(r26, dx15, r30);
  L38():
    p2 = prom<V +>{
      y13 = ld y;
      y14 = force? y13;
      checkMissing(y14);
      c6 = `is.object`(y14);
      if c6 then L1() else L2(y14);
    L0(dx21):
      return dx21;
    L1():
      dr12 = tryDispatchBuiltin.1("[", y14);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2(dr12);
    L2(y16):
      i13 = ld i2;
      i14 = force? i13;
      __6 = ldf `[` in base;
      r33 = dyn __6(y16, i14);
      goto L0(r33);
    L3():
      dx20 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx20);
    };
    r35 = dyn diff2(p2);
    check L39() else D17();
  D17():
    deopt 54 [r35];
  L39():
    diff3 = ldf diff;
    check L40() else D18();
  D18():
    deopt 55 [r35];
  L40():
    p3 = prom<V +>{
      x15 = ld x;
      x16 = force? x15;
      checkMissing(x16);
      c7 = `is.object`(x16);
      if c7 then L1() else L2(x16);
    L0(dx23):
      return dx23;
    L1():
      dr14 = tryDispatchBuiltin.1("[", x16);
      dc7 = getTryDispatchBuiltinDispatched(dr14);
      if dc7 then L3() else L2(dr14);
    L2(x18):
      i15 = ld i2;
      i16 = force? i15;
      __7 = ldf `[` in base;
      r36 = dyn __7(x18, i16);
      goto L0(r36);
    L3():
      dx22 = getTryDispatchBuiltinValue(dr14);
      goto L0(dx22);
    };
    r38 = dyn diff3(p3);
    check L41() else D19();
  D19():
    deopt 57 [r35, r38];
  L41():
    r39 = `/`(r35, r38);
    c8 = ldf c in base;
    r40 = dyn c8(r13, r32, r39);
    check L42() else D20();
  D20():
    deopt 60 [r40];
  L42():
    goto L1(r40);
  }
}