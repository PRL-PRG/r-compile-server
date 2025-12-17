fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r5:V, reg r6:V, reg c:cls, reg r7:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg c1:cls, reg r10:V, reg r11:V, reg zapsmall:cls, reg convolve:cls, reg x:*, reg x1:V, reg p1:p(V +), reg y:*, reg y1:V, reg p2:p(V +), reg r14:V, reg p3:p(V +), reg r16:V, reg zapsmall1:cls, reg convolve1:cls, reg x2:*, reg x3:V, reg p4:p(V +), reg y2:*, reg y3:V, reg c2:L, reg y5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r18:V, reg p5:p(V +), reg r20:V, reg p6:p(V +), reg r22:V, reg rnorm:cls, reg r23:V, reg rnorm1:cls, reg r24:V, reg all_equal:cls, reg convolve2:cls, reg x4:*, reg x5:V, reg p7:p(V +), reg y6:*, reg y7:V, reg p8:p(V +), reg r27:V, reg p9:p(V +), reg rev:cls, reg convolve3:cls, reg rev1:cls, reg y8:*, reg y9:V, reg p10:p(V +), reg r30:V, reg p11:p(V +), reg x6:*, reg x7:V, reg p12:p(V +), reg r33:V, reg p13:p(V +), reg r35:V, reg p14:p(V +), reg r37:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r38:V, reg r39:V, reg r40:V, reg length:cls, reg r41:V, reg x8:*, reg x9:V, reg r42:V, reg r43:V, reg r44:V, reg rnorm2:cls, reg x10:*, reg x11:V, reg p15:p(V +), reg r46:V, reg r47:V, reg r48:V, reg r49:cls, reg plot:cls, reg x12:*, reg x13:V, reg p16:p(V +), reg y10:*, reg y11:V, reg p17:p(V +), reg r52:V, reg lines:cls, reg x14:*, reg x15:V, reg c3:L, reg x17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r53:V, reg x20:V, reg r54:V, reg n:*, reg n1:V, reg c4:cls, reg r55:V, reg r56:V, reg __1:cls, reg r57:V, reg p18:p(V +), reg Han:cls, reg y12:*, reg y13:V, reg p19:p(V +), reg r60:V, reg p20:p(V +), reg r62:V, reg lines1:cls, reg x21:*, reg x22:V, reg c5:L, reg x24:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r63:V, reg x27:V, reg r64:V, reg n2:*, reg n3:V, reg r65:V, reg n4:*, reg n5:V, reg r66:V, reg c6:cls, reg r67:V, reg r68:V, reg __2:cls, reg r69:V, reg p21:p(V +), reg Han1:cls, reg Han2:cls, reg y14:*, reg y15:V, reg p22:p(V +), reg r72:V, reg p23:p(V +), reg r74:V, reg p24:p(V +), reg r76:V |
    mkenv;
    r = clos inner776353196;
    st convolve = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L8() else L9();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  L1(r6):
    st x = r6;
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L11() else L12();
  L6():
    p = prom<V +>{
      graphics = ld graphics;
      graphics1 = force? graphics;
      checkMissing(graphics1);
      return graphics1;
    };
    r4 = dyn require(p);
    check L7() else D1();
  L8():
    c = ldf c in base;
    r7 = dyn c(0.0, 0.0, 0.0, 100.0, 0.0, 0.0, 0.0);
    check L10() else D2();
  L9():
    r5 = dyn base1(0.0, 0.0, 0.0, 100.0, 0.0, 0.0, 0.0);
    goto L1(r5);
  D1():
    deopt 7 [r4];
  D2():
    deopt 18 [r7];
  L2(r9):
    r11 = `/`(r9, 4.0);
    st y = r11;
    zapsmall = ldf zapsmall;
    check L14() else D4();
  L7():
    goto L0();
  L10():
    goto L1(r7);
  L11():
    c1 = ldf c in base;
    r10 = dyn c1(0.0, 0.0, 1.0, 2.0, 1.0, 0.0, 0.0);
    check L13() else D3();
  L12():
    r8 = dyn base2(0.0, 0.0, 1.0, 2.0, 1.0, 0.0, 0.0);
    goto L2(r8);
  D3():
    deopt 30 [r10];
  D4():
    deopt 35 [];
  L13():
    goto L2(r10);
  L14():
    p3 = prom<V +>{
      convolve = ldf convolve;
      p1 = prom<V +>{
        x = ld x;
        x1 = force? x;
        checkMissing(x1);
        return x1;
      };
      p2 = prom<V +>{
        y = ld y;
        y1 = force? y;
        checkMissing(y1);
        return y1;
      };
      r14 = dyn convolve(p1, p2);
      return r14;
    };
    r16 = dyn zapsmall(p3);
    check L15() else D5();
  D5():
    deopt 37 [r16];
  L15():
    zapsmall1 = ldf zapsmall;
    check L16() else D6();
  D6():
    deopt 39 [];
  L16():
    p6 = prom<V +>{
      convolve1 = ldf convolve;
      p4 = prom<V +>{
        x2 = ld x;
        x3 = force? x2;
        checkMissing(x3);
        return x3;
      };
      p5 = prom<V +>{
        y2 = ld y;
        y3 = force? y2;
        checkMissing(y3);
        c2 = `is.object`(y3);
        if c2 then L1() else L2(y3);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("[", y3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(y5):
        __ = ldf `[` in base;
        r18 = dyn __(y5, <int 3, 4, 5>);
        goto L0(r18);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r20 = dyn convolve1[, , type](p4, p5, "f");
      return r20;
    };
    r22 = dyn zapsmall1(p6);
    check L17() else D7();
  D7():
    deopt 41 [r22];
  L17():
    rnorm = ldf rnorm;
    check L18() else D8();
  D8():
    deopt 43 [];
  L18():
    r23 = dyn rnorm(50.0);
    check L19() else D9();
  D9():
    deopt 45 [r23];
  L19():
    st x = r23;
    rnorm1 = ldf rnorm;
    check L20() else D10();
  D10():
    deopt 48 [];
  L20():
    r24 = dyn rnorm1(50.0);
    check L21() else D11();
  D11():
    deopt 50 [r24];
  L21():
    st y = r24;
    all_equal = ldf `all.equal`;
    check L22() else D12();
  D12():
    deopt 53 [];
  L22():
    p9 = prom<V +>{
      convolve2 = ldf convolve;
      p7 = prom<V +>{
        x4 = ld x;
        x5 = force? x4;
        checkMissing(x5);
        return x5;
      };
      p8 = prom<V +>{
        y6 = ld y;
        y7 = force? y6;
        checkMissing(y7);
        return y7;
      };
      r27 = dyn convolve2[, , conj](p7, p8, FALSE);
      return r27;
    };
    p14 = prom<V +>{
      rev = ldf rev;
      p13 = prom<V +>{
        convolve3 = ldf convolve;
        p11 = prom<V +>{
          rev1 = ldf rev;
          p10 = prom<V +>{
            y8 = ld y;
            y9 = force? y8;
            checkMissing(y9);
            return y9;
          };
          r30 = dyn rev1(p10);
          return r30;
        };
        p12 = prom<V +>{
          x6 = ld x;
          x7 = force? x6;
          checkMissing(x7);
          return x7;
        };
        r33 = dyn convolve3(p11, p12);
        return r33;
      };
      r35 = dyn rev(p13);
      return r35;
    };
    r37 = dyn all_equal(p9, p14);
    check L23() else D13();
  D13():
    deopt 56 [r37];
  L23():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L3(r39):
    st n = r39;
    x8 = ld x;
    check L27() else D15();
  L24():
    r40 = `:`(-20.0, 24.0);
    st x = r40;
    length = ldf length in base;
    r41 = dyn length(r40);
    check L26() else D14();
  L25():
    r38 = dyn base3(<lang `<-`(x, `:`(`-`(20.0), 24.0))>);
    goto L3(r38);
  D14():
    deopt 65 [r41];
  D15():
    deopt 67 [x8];
  L26():
    goto L3(r41);
  L27():
    x9 = force? x8;
    checkMissing(x9);
    r42 = `-`(x9, 10.0);
    r43 = `^`(r42, 2.0);
    r44 = `/`(r43, 1000.0);
    rnorm2 = ldf rnorm;
    check L28() else D16();
  D16():
    deopt 75 [r44];
  L28():
    p15 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    r46 = dyn rnorm2(p15);
    check L29() else D17();
  D17():
    deopt 77 [r44, r46];
  L29():
    r47 = `/`(r46, 8.0);
    r48 = `+`(r44, r47);
    st y = r48;
    r49 = clos inner177517877;
    st Han = r49;
    plot = ldf plot;
    check L30() else D18();
  D18():
    deopt 86 [];
  L30():
    p16 = prom<V +>{
      x12 = ld x;
      x13 = force? x12;
      checkMissing(x13);
      return x13;
    };
    p17 = prom<V +>{
      y10 = ld y;
      y11 = force? y10;
      checkMissing(y11);
      return y11;
    };
    r52 = dyn plot[, , main](p16, p17, "Using  convolve(.) for Hanning filters");
    check L31() else D19();
  D19():
    deopt 91 [r52];
  L31():
    lines = ldf lines;
    check L32() else D20();
  D20():
    deopt 93 [];
  L32():
    p18 = prom<V +>{
      x14 = ld x;
      x15 = force? x14;
      checkMissing(x15);
      c3 = `is.object`(x15);
      if c3 then L2() else L3(x15);
    L0(dx3):
      return dx3;
    L2():
      dr2 = tryDispatchBuiltin.1("[", x15);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L4() else L3(dr2);
    L3(x17):
      sym4 = ldf c;
      base4 = ldf c in base;
      guard4 = `==`.4(sym4, base4);
      if guard4 then L5() else L6();
    L1(x20, r54):
      r56 = `-`(<missing>, r54);
      __1 = ldf `[` in base;
      r57 = dyn __1(x20, r56);
      goto L0(r57);
    L4():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    L5():
      n = ld n;
      n1 = force? n;
      checkMissing(n1);
      c4 = ldf c in base;
      r55 = dyn c4(1.0, n1);
      goto L1(x17, r55);
    L6():
      r53 = dyn base4(1.0, <sym n>);
      goto L1(x17, r53);
    };
    p20 = prom<V +>{
      Han = ldf Han;
      p19 = prom<V +>{
        y12 = ld y;
        y13 = force? y12;
        checkMissing(y13);
        return y13;
      };
      r60 = dyn Han(p19);
      return r60;
    };
    r62 = dyn lines[, , col](p18, p20, "red");
    check L33() else D21();
  D21():
    deopt 98 [r62];
  L33():
    lines1 = ldf lines;
    check L34() else D22();
  D22():
    deopt 100 [];
  L34():
    p21 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      c5 = `is.object`(x22);
      if c5 then L2() else L3(x22);
    L0(dx5):
      return dx5;
    L2():
      dr4 = tryDispatchBuiltin.1("[", x22);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(x24):
      sym5 = ldf c;
      base5 = ldf c in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L5() else L6();
    L1(x27, r64):
      r68 = `-`(<missing>, r64);
      __2 = ldf `[` in base;
      r69 = dyn __2(x27, r68);
      goto L0(r69);
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L0(dx4);
    L5():
      n2 = ld n;
      n3 = force? n2;
      checkMissing(n3);
      r65 = `-`(n3, 1.0);
      n4 = ld n;
      n5 = force? n4;
      checkMissing(n5);
      r66 = `:`(r65, n5);
      c6 = ldf c in base;
      r67 = dyn c6(<int 1, 2>, r66);
      goto L1(x24, r67);
    L6():
      r63 = dyn base5(<lang `:`(1.0, 2.0)>, <lang `:`(`(`(`-`(n, 1.0)), n)>);
      goto L1(x24, r63);
    };
    p24 = prom<V +>{
      Han1 = ldf Han;
      p23 = prom<V +>{
        Han2 = ldf Han;
        p22 = prom<V +>{
          y14 = ld y;
          y15 = force? y14;
          checkMissing(y15);
          return y15;
        };
        r72 = dyn Han2(p22);
        return r72;
      };
      r74 = dyn Han1(p23);
      return r74;
    };
    r76 = dyn lines1[, , lwd, col](p21, p24, 2.0, "dark blue");
    check L35() else D23();
  D23():
    deopt 107 [r76];
  L35():
    popenv;
    return r76;
  }
}
fun inner776353196(x, y, conj, type) {
  (reg x:*, reg y:*, reg conj:*, reg type:*) -+> V { var x:*, var y:*, var conj:*, reg conj_isMissing:L, reg conj_orDefault:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg c:cls, reg r2:V, reg p:p(V +), reg match_arg:cls, reg type1:*, reg type2:V, reg p1:p(V +), reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg r7:V, reg x1:*, reg x2:V, reg length:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg y1:*, reg y2:V, reg length1:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg r13:V, reg x3:*, reg x4:V, reg is_numeric:cls, reg r14:V, reg c1:L, reg c3:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg c6:L, reg r16:V, reg y3:*, reg y4:V, reg is_numeric1:cls, reg r17:V, reg c7:L, reg c8:V, reg type3:*, reg type4:V, reg r18:V, reg c10:L, reg ny:*, reg ny1:V, reg n:*, reg n1:V, reg r19:V, reg c11:L, reg stop:cls, reg r20:V, reg r21:V, reg ny2:*, reg ny3:V, reg r23:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r24:V, reg r25:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r26:V, reg r27:V, reg n2:*, reg n3:V, reg rep_int:cls, reg r28:V, reg x5:*, reg x6:V, reg c12:cls, reg r29:V, reg sym7:cls, reg base7:cls, reg guard7:L, reg r30:V, reg r31:V, reg sym8:cls, reg base8:cls, reg guard8:L, reg r32:V, reg r33:V, reg y5:*, reg y6:V, reg sym9:cls, reg base9:cls, reg guard9:L, reg r34:V, reg r35:V, reg n4:*, reg n5:V, reg r36:V, reg rep_int1:cls, reg r37:V, reg c13:cls, reg r38:V, reg length2:cls, reg r39:V, reg fft:cls, reg fft1:cls, reg x7:*, reg x8:V, reg p2:p(V +), reg r41:V, reg conj1:*, reg conj2:V, reg c14:L, reg sym10:cls, reg base10:cls, reg guard10:L, reg r46:V, reg r47:V, reg r48:V, reg fft2:cls, reg y7:*, reg y8:V, reg p3:p(V +), reg r50:V, reg Conj:cls, reg r51:V, reg r52:V, reg r53:V, reg fft3:cls, reg y9:*, reg y10:V, reg p4:p(V +), reg r55:V, reg r56:V, reg p5:p(V +), reg r58:V, reg type5:*, reg type6:V, reg r59:V, reg c15:L, reg Real:*, reg Real1:V, reg c16:L, reg sym11:cls, reg base11:cls, reg guard11:L, reg r60:V, reg r61:V, reg x9:*, reg x10:V, reg Re:cls, reg r62:V, reg r63:V, reg x11:*, reg x12:V, reg c17:L, reg r65:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym12:cls, reg base12:cls, reg guard12:L, reg r68:V, reg r69:V, reg r70:V, reg n6:*, reg n7:V, reg r71:V, reg n8:*, reg n9:V, reg n10:*, reg n11:V, reg r72:V, reg r73:V, reg n12:*, reg n13:V, reg r74:V, reg c18:cls, reg r75:V, reg r76:V, reg __:cls, reg r77:V, reg n14:*, reg n15:V, reg r78:V, reg Real2:*, reg Real3:V, reg c19:L, reg sym13:cls, reg base13:cls, reg guard13:L, reg r79:V, reg r80:V, reg x13:*, reg x14:V, reg Re1:cls, reg r81:V, reg r82:V, reg x15:*, reg x16:V, reg n16:*, reg n17:V, reg r83:V |
    mkenv;
    st x = x;
    st y = y;
    conj_isMissing = missing.0(conj);
    if conj_isMissing then L0(TRUE) else L0(conj);
  L0(conj_orDefault):
    st conj = conj_orDefault;
    type_isMissing = missing.0(type);
    if type_isMissing then L1() else L2(type);
  L1():
    p = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      return r1;
    L1():
      c = ldf c in base;
      r2 = dyn c("circular", "open", "filter");
      goto L0(r2);
    L2():
      r = dyn base("circular", "open", "filter");
      goto L0(r);
    };
    goto L2(p);
  L2(type_orDefault):
    st type = type_orDefault;
    match_arg = ldf `match.arg`;
    check L26() else D0();
  D0():
    deopt 1 [];
  L26():
    p1 = prom<V +>{
      type1 = ld type;
      type2 = force? type1;
      checkMissing(type2);
      return type2;
    };
    r5 = dyn match_arg(p1);
    check L27() else D1();
  D1():
    deopt 3 [r5];
  L27():
    st type = r5;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L28() else L29();
  L3(r7):
    st n = r7;
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L32() else L33();
  L28():
    x1 = ld x;
    check L30() else D2();
  L29():
    r6 = dyn base1(<sym x>);
    goto L3(r6);
  D2():
    deopt 7 [x1];
  L4(r10):
    st ny = r10;
    sym3 = ldf `is.numeric`;
    base3 = ldf `is.numeric` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L30():
    x2 = force? x1;
    checkMissing(x2);
    length = ldf length in base;
    r8 = dyn length(x2);
    check L31() else D3();
  L32():
    y1 = ld y;
    check L34() else D4();
  L33():
    r9 = dyn base2(<sym y>);
    goto L4(r9);
  D3():
    deopt 10 [r8];
  D4():
    deopt 14 [y1];
  L5(r13):
    c1 = `as.logical`(r13);
    if c1 then L40() else L6(c1);
  L31():
    goto L3(r8);
  L34():
    y2 = force? y1;
    checkMissing(y2);
    length1 = ldf length in base;
    r11 = dyn length1(y2);
    check L35() else D5();
  L36():
    x3 = ld x;
    check L38() else D6();
  L37():
    r12 = dyn base3(<sym x>);
    goto L5(r12);
  D5():
    deopt 17 [r11];
  D6():
    deopt 21 [x3];
  L6(c3):
    st Real = c3;
    type3 = ld type;
    check L46() else D10();
  L35():
    goto L4(r11);
  L38():
    x4 = force? x3;
    checkMissing(x4);
    is_numeric = ldf `is.numeric` in base;
    r14 = dyn is_numeric(x4);
    check L39() else D7();
  L40():
    sym4 = ldf `is.numeric`;
    base4 = ldf `is.numeric` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L41() else L42();
  D7():
    deopt 24 [r14];
  D10():
    deopt 33 [type3];
  L7(c6, r16):
    c7 = `as.logical`(r16);
    c8 = `&&`(c6, c7);
    goto L6(c8);
  L39():
    goto L5(r14);
  L41():
    y3 = ld y;
    check L43() else D8();
  L42():
    r15 = dyn base4(<sym y>);
    goto L7(c1, r15);
  L46():
    type4 = force? type3;
    checkMissing(type4);
    r18 = `==`(type4, "circular");
    c10 = `as.logical`(r18);
    if c10 then L47() else L8();
  D8():
    deopt 27 [c1, y3];
  L8():
    ny2 = ld ny;
    check L55() else D15();
  L11():
    fft = ldf fft;
    check L75() else D25();
  L43():
    y4 = force? y3;
    checkMissing(y4);
    is_numeric1 = ldf `is.numeric` in base;
    r17 = dyn is_numeric1(y4);
    check L44() else D9();
  L47():
    ny = ld ny;
    check L48() else D11();
  D9():
    deopt 30 [c1, r17];
  D11():
    deopt 37 [ny];
  D15():
    deopt 47 [ny2];
  D25():
    deopt 88 [];
  L44():
    goto L7(c1, r17);
  L48():
    ny1 = force? ny;
    checkMissing(ny1);
    n = ld n;
    check L49() else D12();
  L55():
    ny3 = force? ny2;
    checkMissing(ny3);
    r23 = `-`(ny3, 1.0);
    st n1 = r23;
    sym5 = ldf c;
    base5 = ldf c in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L56() else L57();
  L75():
    p5 = prom<V +>{
      fft1 = ldf fft;
      p2 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      r41 = dyn fft1(p2);
      conj1 = ld conj;
      conj2 = force? conj1;
      checkMissing(conj2);
      c14 = `as.logical`(conj2);
      if c14 then L3() else L0();
    L0():
      fft3 = ldf fft;
      p4 = prom<V +>{
        y9 = ld y;
        y10 = force? y9;
        checkMissing(y10);
        return y10;
      };
      r55 = dyn fft3(p4);
      goto L2(r41, r55);
    L2(r52, r53):
      r56 = `*`(r52, r53);
      return r56;
    L3():
      sym10 = ldf Conj;
      base10 = ldf Conj in base;
      guard10 = `==`.4(sym10, base10);
      if guard10 then L4() else L5();
    L1(r47, r48):
      goto L2(r47, r48);
    L4():
      fft2 = ldf fft;
      p3 = prom<V +>{
        y7 = ld y;
        y8 = force? y7;
        checkMissing(y8);
        return y8;
      };
      r50 = dyn fft2(p3);
      Conj = ldf Conj in base;
      r51 = dyn Conj(r50);
      goto L1(r41, r51);
    L5():
      r46 = dyn base10(<lang fft(y)>);
      goto L1(r41, r46);
    };
    r58 = dyn fft[, inverse](p5, TRUE);
    check L76() else D26();
  D12():
    deopt 38 [ny1, n];
  D26():
    deopt 92 [r58];
  L12(r25):
    st x = r25;
    sym7 = ldf length;
    base7 = ldf length in base;
    guard7 = `==`.4(sym7, base7);
    if guard7 then L64() else L65();
  L49():
    n1 = force? n;
    checkMissing(n1);
    r19 = `!=`(ny1, n1);
    c11 = `as.logical`(r19);
    if c11 then L50() else L9();
  L56():
    sym6 = ldf `rep.int`;
    base6 = ldf `rep.int` in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L58() else L59();
  L57():
    r24 = dyn base5(<lang rep.int(0.0, n1)>, <sym x>);
    goto L12(r24);
  L76():
    st x = r58;
    type5 = ld type;
    check L77() else D27();
  D27():
    deopt 94 [type5];
  L9():
    goto L10(NULL);
  L10(r21):
    goto L11();
  L13(r27):
    x5 = ld x;
    check L62() else D18();
  L14(r31):
    st n = r31;
    goto L11();
  L50():
    stop = ldf stop;
    check L51() else D13();
  L58():
    n2 = ld n1;
    check L60() else D16();
  L59():
    r26 = dyn base6(0.0, <sym n1>);
    goto L13(r26);
  L64():
    sym8 = ldf c;
    base8 = ldf c in base;
    guard8 = `==`.4(sym8, base8);
    if guard8 then L66() else L67();
  L65():
    r30 = dyn base7(<lang `<-`(y, c(y, rep.int(0.0, `-`(n, 1.0))))>);
    goto L14(r30);
  L77():
    type6 = force? type5;
    checkMissing(type6);
    r59 = `==`(type6, "filter");
    c15 = `as.logical`(r59);
    if c15 then L78() else L17();
  D13():
    deopt 42 [];
  D16():
    deopt 57 [n2];
  D18():
    deopt 61 [x5];
  L15(r33):
    st y = r33;
    length2 = ldf length in base;
    r39 = dyn length2(r33);
    check L74() else D24();
  L17():
    Real2 = ld Real;
    check L99() else D38();
  L51():
    r20 = dyn stop("length mismatch in convolution");
    check L52() else D14();
  L60():
    n3 = force? n2;
    checkMissing(n3);
    rep_int = ldf `rep.int` in base;
    r28 = dyn rep_int(0.0, n3);
    check L61() else D17();
  L62():
    x6 = force? x5;
    checkMissing(x6);
    c12 = ldf c in base;
    r29 = dyn c12(r27, x6);
    check L63() else D19();
  L66():
    y5 = ld y;
    check L68() else D20();
  L67():
    r32 = dyn base8(<sym y>, <lang rep.int(0.0, `-`(n, 1.0))>);
    goto L15(r32);
  L78():
    Real = ld Real;
    check L79() else D28();
  D14():
    deopt 44 [r20];
  D17():
    deopt 60 [r28];
  D19():
    deopt 64 [r29];
  D20():
    deopt 70 [y5];
  D24():
    deopt 85 [r39];
  D28():
    deopt 98 [Real];
  D38():
    deopt 128 [Real2];
  L52():
    goto L10(r20);
  L61():
    goto L13(r28);
  L63():
    goto L12(r29);
  L68():
    y6 = force? y5;
    checkMissing(y6);
    sym9 = ldf `rep.int`;
    base9 = ldf `rep.int` in base;
    guard9 = `==`.4(sym9, base9);
    if guard9 then L69() else L70();
  L74():
    goto L14(r39);
  L79():
    Real1 = force? Real;
    checkMissing(Real1);
    c16 = `as.logical`(Real1);
    if c16 then L80() else L18();
  L99():
    Real3 = force? Real2;
    checkMissing(Real3);
    c19 = `as.logical`(Real3);
    if c19 then L100() else L23();
  L16(r35):
    c13 = ldf c in base;
    r38 = dyn c13(y6, r35);
    check L73() else D23();
  L18():
    x11 = ld x;
    check L86() else D31();
  L20(r63):
    c17 = `is.object`(r63);
    if c17 then L87() else L88(r63);
  L23():
    x15 = ld x;
    check L106() else D41();
  L25(r82):
    n16 = ld n;
    check L107() else D42();
  L69():
    n4 = ld n;
    check L71() else D21();
  L70():
    r34 = dyn base9(0.0, <lang `-`(n, 1.0)>);
    goto L16(r34);
  L80():
    sym11 = ldf Re;
    base11 = ldf Re in base;
    guard11 = `==`.4(sym11, base11);
    if guard11 then L81() else L82();
  L100():
    sym13 = ldf Re;
    base13 = ldf Re in base;
    guard13 = `==`.4(sym13, base13);
    if guard13 then L101() else L102();
  D21():
    deopt 75 [n4];
  D23():
    deopt 82 [r38];
  D31():
    deopt 106 [x11];
  D41():
    deopt 136 [x15];
  D42():
    deopt 137 [r82, n16];
  L19(r61):
    goto L20(r61);
  L21(dx1):
    n14 = ld n;
    check L97() else D37();
  L24(r80):
    goto L25(r80);
  L71():
    n5 = force? n4;
    checkMissing(n5);
    r36 = `-`(n5, 1.0);
    rep_int1 = ldf `rep.int` in base;
    r37 = dyn rep_int1(0.0, r36);
    check L72() else D22();
  L73():
    goto L15(r38);
  L81():
    x9 = ld x;
    check L83() else D29();
  L82():
    r60 = dyn base11(<sym x>);
    goto L19(r60);
  L86():
    x12 = force? x11;
    checkMissing(x12);
    goto L20(x12);
  L87():
    dr = tryDispatchBuiltin.1("[", r63);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L89() else L88(dr);
  L88(r65):
    sym12 = ldf c;
    base12 = ldf c in base;
    guard12 = `==`.4(sym12, base12);
    if guard12 then L90() else L91();
  L101():
    x13 = ld x;
    check L103() else D39();
  L102():
    r79 = dyn base13(<sym x>);
    goto L24(r79);
  L106():
    x16 = force? x15;
    checkMissing(x16);
    goto L25(x16);
  L107():
    n17 = force? n16;
    checkMissing(n17);
    r83 = `/`(r82, n17);
    popenv;
    return r83;
  D22():
    deopt 80 [r37];
  D29():
    deopt 102 [x9];
  D37():
    deopt 125 [dx1, n14];
  D39():
    deopt 132 [x13];
  L22(r69, r70):
    r76 = `-`(<missing>, r70);
    __ = ldf `[` in base;
    r77 = dyn __(r69, r76);
    goto L21(r77);
  L72():
    goto L16(r37);
  L83():
    x10 = force? x9;
    checkMissing(x10);
    Re = ldf Re in base;
    r62 = dyn Re(x10);
    check L84() else D30();
  L89():
    dx = getTryDispatchBuiltinValue(dr);
    goto L21(dx);
  L90():
    n6 = ld n1;
    check L92() else D32();
  L91():
    r68 = dyn base12(<lang `:`(1, n1)>, <lang `:`(`(`(`+`(`-`(n, n1), 1)), n)>);
    goto L22(r65, r68);
  L97():
    n15 = force? n14;
    checkMissing(n15);
    r78 = `/`(dx1, n15);
    popenv;
    return r78;
  L103():
    x14 = force? x13;
    checkMissing(x14);
    Re1 = ldf Re in base;
    r81 = dyn Re1(x14);
    check L104() else D40();
  D30():
    deopt 105 [r62];
  D32():
    deopt 111 [r65, 1, n6];
  D40():
    deopt 135 [r81];
  L84():
    goto L19(r62);
  L92():
    n7 = force? n6;
    checkMissing(n7);
    r71 = `:`(1, n7);
    n8 = ld n;
    check L93() else D33();
  L104():
    goto L24(r81);
  D33():
    deopt 114 [r65, n8];
  L93():
    n9 = force? n8;
    checkMissing(n9);
    n10 = ld n1;
    check L94() else D34();
  D34():
    deopt 115 [r65, n9, n10];
  L94():
    n11 = force? n10;
    checkMissing(n11);
    r72 = `-`(n9, n11);
    r73 = `+`(r72, 1);
    n12 = ld n;
    check L95() else D35();
  D35():
    deopt 119 [r65, r73, n12];
  L95():
    n13 = force? n12;
    checkMissing(n13);
    r74 = `:`(r73, n13);
    c18 = ldf c in base;
    r75 = dyn c18(r71, r74);
    check L96() else D36();
  D36():
    deopt 123 [r65, r75];
  L96():
    goto L22(r65, r75);
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:*, reg convolve:cls, reg y1:*, reg y2:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg c:cls, reg r3:V, reg r4:V, reg p1:p(V +), reg r6:V |
    mkenv;
    st y = y;
    convolve = ldf convolve;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    p1 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      r4 = `/`(r2, 4.0);
      return r4;
    L1():
      c = ldf c in base;
      r3 = dyn c(1.0, 2.0, 1.0);
      goto L0(r3);
    L2():
      r1 = dyn base(1.0, 2.0, 1.0);
      goto L0(r1);
    };
    r6 = dyn convolve[, , type](p, p1, "filter");
    check L1() else D1();
  D1():
    deopt 6 [r6];
  L1():
    popenv;
    return r6;
  }
}