fun main() {
  () -+> V { reg r:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg require:cls, reg graphics:*, reg graphics1:V, reg p:p(V +), reg r4:V, reg plot:cls, reg cars:*, reg cars1:V, reg p1:p(V +), reg r6:V, reg line:cls, reg cars2:*, reg cars3:V, reg p2:p(V +), reg r8:V, reg abline:cls, reg coef:cls, reg z:*, reg z1:V, reg p3:p(V +), reg r10:V, reg p4:p(V +), reg r12:V, reg plot1:cls, reg __:cls, reg r13:V, reg p5:p(V +), reg deparse:cls, reg z2:*, reg z3:V, reg c:L, reg z5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r15:V, reg p6:p(V +), reg r17:V, reg p7:p(V +), reg r19:V, reg data_frame:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r20:V, reg r21:V, reg c1:cls, reg r22:V, reg p8:p(V +), reg sym2:cls, reg base2:cls, reg guard2:L, reg r26:V, reg r27:R, reg r28:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r31:V, reg r32:R, reg r33:V, reg rep:cls, reg r34:V, reg c2:cls, reg r35:V, reg r36:V, reg p9:p(V +), reg r38:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r39:V, reg r40:V, reg with:cls, reg d_AS:*, reg d_AS1:V, reg p10:p(V +), reg t:cls, reg sapply:cls, reg p11:p(V +), reg r43:cls, reg p12:p(V +), reg r45:V, reg p13:p(V +), reg r47:V, reg p14:p(V +), reg r49:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r50:V, reg r51:V, reg paste:cls, reg format:cls, reg p15:p(V +), reg r53:V, reg p16:p(V +), reg r55:V, reg sym6:cls, reg base6:cls, reg guard6:L, reg r56:V, reg r57:V, reg c3:cls, reg r58:V, reg list:cls, reg r59:V, reg l:*, reg dimnames__:cls, reg r60:V, reg cAS:*, reg cAS1:V |
    mkenv;
    r = clos inner4293785269;
    st line = r;
    sym = ldf require;
    base = ldf require in base;
    guard = `==`.4(sym, base);
    if guard then L4() else L5();
  L0():
    plot = ldf plot;
    check L8() else D2();
  L4():
    require = ldf require;
    check L6() else D0();
  L5():
    r1 = dyn base(<sym graphics>);
    goto L0();
  D0():
    deopt 5 [];
  D2():
    deopt 9 [];
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
    p1 = prom<V +>{
      cars = ld cars;
      cars1 = force? cars;
      checkMissing(cars1);
      return cars1;
    };
    r6 = dyn plot(p1);
    check L9() else D3();
  D1():
    deopt 7 [r4];
  D3():
    deopt 11 [r6];
  L7():
    goto L0();
  L9():
    line = ldf line;
    check L10() else D4();
  D4():
    deopt 13 [];
  L10():
    p2 = prom<V +>{
      cars2 = ld cars;
      cars3 = force? cars2;
      checkMissing(cars3);
      return cars3;
    };
    r8 = dyn line(p2);
    check L11() else D5();
  D5():
    deopt 15 [r8];
  L11():
    st z = r8;
    abline = ldf abline;
    check L12() else D6();
  D6():
    deopt 18 [];
  L12():
    p4 = prom<V +>{
      coef = ldf coef;
      p3 = prom<V +>{
        z = ld z;
        z1 = force? z;
        checkMissing(z1);
        return z1;
      };
      r10 = dyn coef(p3);
      return r10;
    };
    r12 = dyn abline(p4);
    check L13() else D7();
  D7():
    deopt 20 [r12];
  L13():
    plot1 = ldf plot;
    check L14() else D8();
  D8():
    deopt 22 [];
  L14():
    p5 = prom<V +>{
      __ = ldf `~` in base;
      r13 = dyn __(<lang residuals(z)>, <lang fitted(z)>);
      return r13;
    };
    p7 = prom<V +>{
      deparse = ldf deparse;
      p6 = prom<V +>{
        z2 = ld z;
        z3 = force? z2;
        checkMissing(z3);
        c = `is.object`(z3);
        if c then L1() else L2(z3);
      L0(dx1):
        return dx1;
      L1():
        dr = tryDispatchBuiltin.1("$", z3);
        dc = getTryDispatchBuiltinDispatched(dr);
        if dc then L3() else L2(dr);
      L2(z5):
        r15 = `$`(z5, <sym call>);
        goto L0(r15);
      L3():
        dx = getTryDispatchBuiltinValue(dr);
        goto L0(dx);
      };
      r17 = dyn deparse(p6);
      return r17;
    };
    r19 = dyn plot1[, main](p5, p7);
    check L15() else D9();
  D9():
    deopt 26 [r19];
  L15():
    data_frame = ldf `data.frame`;
    check L16() else D10();
  D10():
    deopt 28 [];
  L16():
    p8 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r21):
      return r21;
    L1():
      c1 = ldf c in base;
      r22 = dyn c1(<int -4, -3, -2, -1, 0, 1, 2, 3>, 12.0);
      goto L0(r22);
    L2():
      r20 = dyn base1(<lang `:`(`-`(4.0), 3.0)>, 12.0);
      goto L0(r20);
    };
    p9 = prom<V +>{
      sym2 = ldf c;
      base2 = ldf c in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L2() else L3();
    L0(r27, r28):
      r36 = `*`(r27, r28);
      return r36;
    L2():
      sym3 = ldf rep;
      base3 = ldf rep in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L4() else L5();
    L3():
      r26 = dyn base2(<lang rep(0.0, 6.0)>, <lang `-`(5.0)>, 5.0, 1.0);
      goto L0(3.0, r26);
    L1(r32, r33):
      c2 = ldf c in base;
      r35 = dyn c2(r33, -5.0, 5.0, 1.0);
      goto L0(r32, r35);
    L4():
      rep = ldf rep in base;
      r34 = dyn rep(0.0, 6.0);
      goto L1(3.0, r34);
    L5():
      r31 = dyn base3(0.0, 6.0);
      goto L1(3.0, r31);
    };
    r38 = dyn data_frame[x, y](p8, p9);
    check L17() else D11();
  D11():
    deopt 33 [r38];
  L17():
    st `d.AS` = r38;
    sym4 = ldf with;
    base4 = ldf with in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L18() else L19();
  L1(r40):
    st cAS = r40;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L22() else L23();
  L18():
    with = ldf with;
    check L20() else D12();
  L19():
    r39 = dyn base4(<sym d.AS>, <lang t(sapply(`:`(1.0, 10.0), function((it=), `$`(line(x, y, iter=it), coefficients), NULL)))>);
    goto L1(r39);
  D12():
    deopt 37 [];
  L2(r51):
    l = ld cAS;
    dimnames__ = ldf `dimnames<-`;
    check L30() else D18();
  L20():
    p10 = prom<V +>{
      d_AS = ld `d.AS`;
      d_AS1 = force? d_AS;
      checkMissing(d_AS1);
      return d_AS1;
    };
    p14 = prom<V +>{
      t = ldf t;
      p13 = prom<V +>{
        sapply = ldf sapply;
        p11 = prom<V +>{
          return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
        };
        p12 = prom<V +>{
          r43 = clos inner3728284299;
          return r43;
        };
        r45 = dyn sapply(p11, p12);
        return r45;
      };
      r47 = dyn t(p13);
      return r47;
    };
    r49 = dyn with(p10, p14);
    check L21() else D13();
  L22():
    paste = ldf paste;
    check L24() else D14();
  L23():
    r50 = dyn base5(<lang paste("it =", format(`:`(1.0, 10.0)))>, <lang c("intercept", "slope")>);
    goto L2(r50);
  D13():
    deopt 40 [r49];
  D14():
    deopt 45 [];
  D18():
    deopt 58 [r51, l, r51];
  L21():
    goto L1(r49);
  L24():
    p16 = prom<V +>{
      format = ldf format;
      p15 = prom<V +>{
        return <int 1, 2, 3, 4, 5, 6, 7, 8, 9, 10>;
      };
      r53 = dyn format(p15);
      return r53;
    };
    r55 = dyn paste("it =", p16);
    check L25() else D15();
  L30():
    r60 = dyn dimnames__(l, NULL, r51);
    check L31() else D19();
  D15():
    deopt 48 [r55];
  D19():
    deopt 60 [r51, r60];
  L25():
    sym6 = ldf c;
    base6 = ldf c in base;
    guard6 = `==`.4(sym6, base6);
    if guard6 then L26() else L27();
  L31():
    st cAS = r60;
    cAS = ld cAS;
    check L32() else D20();
  D20():
    deopt 62 [cAS];
  L3(r57):
    list = ldf list in base;
    r59 = dyn list(r55, r57);
    check L29() else D17();
  L26():
    c3 = ldf c in base;
    r58 = dyn c3("intercept", "slope");
    check L28() else D16();
  L27():
    r56 = dyn base6("intercept", "slope");
    goto L3(r56);
  L32():
    cAS1 = force? cAS;
    checkMissing(cAS1);
    popenv;
    return cAS1;
  D16():
    deopt 54 [r58];
  D17():
    deopt 56 [r59];
  L28():
    goto L3(r58);
  L29():
    goto L2(r59);
  }
}
fun inner4293785269(x, y, iter) {
  (reg x:*, reg y:*, reg iter:*) -+> V { var x:*, var y:*, reg y_isMissing:L, reg y_orDefault:*, var iter:*, reg iter_isMissing:L, reg iter_orDefault:*, reg xy_coords:cls, reg x1:*, reg x2:V, reg p:p(V +), reg y1:*, reg y2:V, reg p1:p(V +), reg r2:V, reg complete_cases:cls, reg xy:*, reg xy1:V, reg c:L, reg xy3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r3:V, reg p2:p(V +), reg xy4:*, reg xy5:V, reg c1:L, reg xy7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r5:V, reg p3:p(V +), reg r7:V, reg sys_call:cls, reg r8:V, reg structure:cls, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg r10:V, reg C_tukeyline:*, reg C_tukeyline1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r11:V, reg C_tukeyline4:V, reg r12:V, reg xy8:*, reg xy9:V, reg c2:L, reg C_tukeyline6:V, reg xy11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg C_tukeyline8:V, reg dx5:V, reg r13:V, reg c3:L, reg C_tukeyline10:V, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg C_tukeyline12:V, reg dx9:V, reg ok:*, reg ok1:V, reg __:cls, reg r14:V, reg as_double:cls, reg r15:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r18:V, reg C_tukeyline15:V, reg r19:V, reg r20:V, reg xy12:*, reg xy13:V, reg c4:L, reg C_tukeyline17:V, reg r22:V, reg xy15:V, reg dr8:V, reg dc4:L, reg dx10:V, reg C_tukeyline19:V, reg r24:V, reg dx11:V, reg r25:V, reg c5:L, reg C_tukeyline21:V, reg r27:V, reg dx13:V, reg dr10:V, reg dc5:L, reg dx14:V, reg C_tukeyline23:V, reg r29:V, reg dx15:V, reg ok2:*, reg ok3:V, reg __1:cls, reg r30:V, reg as_double1:cls, reg r31:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r36:V, reg C_tukeyline26:V, reg r37:V, reg r38:V, reg r39:V, reg iter1:*, reg iter2:V, reg as_integer:cls, reg r40:V, reg Call:*, reg Call1:V, reg vargs:dots, reg r41:V, reg p4:p(V +), reg r43:V |
    mkenv;
    st x = x;
    y_isMissing = missing.0(y);
    if y_isMissing then L0(NULL) else L0(y);
  L0(y_orDefault):
    st y = y_orDefault;
    iter_isMissing = missing.0(iter);
    if iter_isMissing then L1(1.0) else L1(iter);
  L1(iter_orDefault):
    st iter = iter_orDefault;
    xy_coords = ldf `xy.coords`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p1 = prom<V +>{
      y1 = ld y;
      y2 = force? y1;
      checkMissing(y2);
      return y2;
    };
    r2 = dyn xy_coords[, , setLab](p, p1, FALSE);
    check L3() else D1();
  D1():
    deopt 6 [r2];
  L3():
    st xy = r2;
    complete_cases = ldf `complete.cases`;
    check L4() else D2();
  D2():
    deopt 9 [];
  L4():
    p2 = prom<V +>{
      xy = ld xy;
      xy1 = force? xy;
      checkMissing(xy1);
      c = `is.object`(xy1);
      if c then L1() else L2(xy1);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("$", xy1);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(xy3):
      r3 = `$`(xy3, <sym x>);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    p3 = prom<V +>{
      xy4 = ld xy;
      xy5 = force? xy4;
      checkMissing(xy5);
      c1 = `is.object`(xy5);
      if c1 then L1() else L2(xy5);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("$", xy5);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(xy7):
      r5 = `$`(xy7, <sym y>);
      goto L0(r5);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    r7 = dyn complete_cases(p2, p3);
    check L5() else D3();
  D3():
    deopt 12 [r7];
  L5():
    st ok = r7;
    sys_call = ldf `sys.call`;
    check L6() else D4();
  D4():
    deopt 15 [];
  L6():
    r8 = dyn sys_call();
    check L7() else D5();
  D5():
    deopt 16 [r8];
  L7():
    st Call = r8;
    structure = ldf structure;
    check L8() else D6();
  D6():
    deopt 19 [];
  L8():
    p4 = prom<V +>{
      sym = ldf `.Call`;
      base = ldf `.Call` in base;
      guard = `==`.4(sym, base);
      if guard then L6() else L7();
    L0(r10):
      return r10;
    L6():
      C_tukeyline = ld C_tukeyline;
      C_tukeyline1 = force? C_tukeyline;
      checkMissing(C_tukeyline1);
      sym1 = ldf `as.double`;
      base1 = ldf `as.double` in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L8() else L9();
    L7():
      r9 = dyn base(<sym C_tukeyline>, <lang as.double(`[`(`$`(xy, x), ok))>, <lang as.double(`[`(`$`(xy, y), ok))>, <lang as.integer(iter)>, <sym Call>);
      goto L0(r9);
    L1(C_tukeyline4, r12):
      sym2 = ldf `as.double`;
      base2 = ldf `as.double` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L17() else L18();
    L8():
      xy8 = ld xy;
      xy9 = force? xy8;
      checkMissing(xy9);
      c2 = `is.object`(xy9);
      if c2 then L11() else L12(C_tukeyline1, xy9);
    L9():
      r11 = dyn base1(<lang `[`(`$`(xy, x), ok)>);
      goto L1(C_tukeyline1, r11);
    L3(C_tukeyline15, r19, r20):
      sym3 = ldf `as.integer`;
      base3 = ldf `as.integer` in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L26() else L27();
    L10(C_tukeyline8, dx5):
      c3 = `is.object`(dx5);
      if c3 then L14() else L15(C_tukeyline8, dx5);
    L11():
      dr4 = tryDispatchBuiltin.1("$", xy9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L13() else L12(C_tukeyline1, dr4);
    L12(C_tukeyline6, xy11):
      r13 = `$`(xy11, <sym x>);
      goto L10(C_tukeyline6, r13);
    L17():
      xy12 = ld xy;
      xy13 = force? xy12;
      checkMissing(xy13);
      c4 = `is.object`(xy13);
      if c4 then L20() else L21(C_tukeyline4, r12, xy13);
    L18():
      r18 = dyn base2(<lang `[`(`$`(xy, y), ok)>);
      goto L3(C_tukeyline4, r12, r18);
    L2(C_tukeyline12, dx9):
      as_double = ldf `as.double` in base;
      r15 = dyn as_double(dx9);
      goto L1(C_tukeyline12, r15);
    L5(C_tukeyline26, r37, r38, r39):
      Call = ld Call;
      Call1 = force? Call;
      checkMissing(Call1);
      vargs = dots[r37, r38, r39, Call1];
      r41 = `.Call`(C_tukeyline26, vargs, <missing>);
      goto L0(r41);
    L13():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L10(C_tukeyline1, dx4);
    L14():
      dr6 = tryDispatchBuiltin.1("[", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L16() else L15(C_tukeyline8, dr6);
    L15(C_tukeyline10, dx7):
      ok = ld ok;
      ok1 = force? ok;
      __ = ldf `[` in base;
      r14 = dyn __(dx7, ok1);
      goto L2(C_tukeyline10, r14);
    L19(C_tukeyline19, r24, dx11):
      c5 = `is.object`(dx11);
      if c5 then L23() else L24(C_tukeyline19, r24, dx11);
    L20():
      dr8 = tryDispatchBuiltin.1("$", xy13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L22() else L21(C_tukeyline4, r12, dr8);
    L21(C_tukeyline17, r22, xy15):
      r25 = `$`(xy15, <sym y>);
      goto L19(C_tukeyline17, r22, r25);
    L26():
      iter1 = ld iter;
      iter2 = force? iter1;
      checkMissing(iter2);
      as_integer = ldf `as.integer` in base;
      r40 = dyn as_integer(iter2);
      goto L5(C_tukeyline15, r19, r20, r40);
    L27():
      r36 = dyn base3(<sym iter>);
      goto L5(C_tukeyline15, r19, r20, r36);
    L4(C_tukeyline23, r29, dx15):
      as_double1 = ldf `as.double` in base;
      r31 = dyn as_double1(dx15);
      goto L3(C_tukeyline23, r29, r31);
    L16():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L2(C_tukeyline8, dx8);
    L22():
      dx10 = getTryDispatchBuiltinValue(dr8);
      goto L19(C_tukeyline4, r12, dx10);
    L23():
      dr10 = tryDispatchBuiltin.1("[", dx11);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L25() else L24(C_tukeyline19, r24, dr10);
    L24(C_tukeyline21, r27, dx13):
      ok2 = ld ok;
      ok3 = force? ok2;
      __1 = ldf `[` in base;
      r30 = dyn __1(dx13, ok3);
      goto L4(C_tukeyline21, r27, r30);
    L25():
      dx14 = getTryDispatchBuiltinValue(dr10);
      goto L4(C_tukeyline19, r24, dx14);
    };
    r43 = dyn structure[, class](p4, "tukeyline");
    check L9() else D7();
  D7():
    deopt 23 [r43];
  L9():
    popenv;
    return r43;
  }
}
fun inner3728284299(it) {
  (reg it:*) -+> V { var it:*, reg line:cls, reg x:*, reg x1:V, reg p:p(V +), reg y:*, reg y1:V, reg p1:p(V +), reg it1:*, reg it2:V, reg p2:p(V +), reg r3:V, reg c:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r6:V |
    mkenv;
    st it = it;
    line = ldf line;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p2 = prom<V +>{
      it1 = ld it;
      it2 = force? it1;
      checkMissing(it2);
      return it2;
    };
    r3 = dyn line[, , iter](p, p1, p2);
    check L1() else D1();
  D1():
    deopt 6 [r3];
  L1():
    c = `is.object`(r3);
    if c then L3() else L4(r3);
  L2(dx1):
    popenv;
    return dx1;
  L3():
    dr = tryDispatchBuiltin.1("$", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L5() else L4(dr);
  L4(r5):
    r6 = `$`(r5, <sym coefficients>);
    goto L2(r6);
  L5():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  }
}