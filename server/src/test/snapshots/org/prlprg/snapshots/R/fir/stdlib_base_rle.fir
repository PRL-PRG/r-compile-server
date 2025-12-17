fun main() {
  () -+> V { reg r:cls, reg rev:cls, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg r2:V, reg rep:cls, reg r3:V, reg p:p(V +), reg r5:V, reg rle:cls, reg x:*, reg x1:V, reg p1:p(V +), reg r7:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r8:V, reg r9:V, reg c:cls, reg r10:V, reg rle1:cls, reg z:*, reg z1:V, reg p2:p(V +), reg r12:V, reg rle2:cls, reg sym2:cls, reg base2:cls, reg guard2:L, reg r13:V, reg r14:V, reg z2:*, reg z3:V, reg as_character:cls, reg r15:V, reg p3:p(V +), reg r17:V, reg print:cls, reg rle3:cls, reg z4:*, reg z5:V, reg p4:p(V +), reg r19:V, reg p5:p(V +), reg r21:V, reg integer:cls, reg r22:V, reg stopifnot:cls, reg x2:*, reg x3:V, reg inverse_rle:cls, reg rle4:cls, reg x4:*, reg x5:V, reg p6:p(V +), reg r24:V, reg p7:p(V +), reg r26:V, reg r27:V, reg p8:p(V +), reg sym3:cls, reg base3:cls, reg guard3:L, reg r29:V, reg r30:V, reg N:*, reg N1:V, reg inverse_rle1:cls, reg rle5:cls, reg N2:*, reg N3:V, reg p9:p(V +), reg r32:V, reg p10:p(V +), reg r34:V, reg identical:cls, reg r35:V, reg p11:p(V +), reg z6:*, reg z7:V, reg inverse_rle2:cls, reg rle6:cls, reg z8:*, reg z9:V, reg p12:p(V +), reg r38:V, reg p13:p(V +), reg r40:V, reg r41:V, reg p14:p(V +), reg r43:V |
    mkenv;
    r = clos inner2501545716;
    st rle = r;
    rev = ldf rev;
    check L1() else D0();
  D0():
    deopt 4 [];
  L1():
    p = prom<V +>{
      sym = ldf rep;
      base = ldf rep in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r2):
      return r2;
    L1():
      rep = ldf rep in base;
      r3 = dyn rep(<lang `:`(6.0, 10.0)>, <lang `:`(1.0, 5.0)>);
      goto L0(r3);
    L2():
      r1 = dyn base(<lang `:`(6.0, 10.0)>, <lang `:`(1.0, 5.0)>);
      goto L0(r1);
    };
    r5 = dyn rev(p);
    check L2() else D1();
  D1():
    deopt 6 [r5];
  L2():
    st x = r5;
    rle = ldf rle;
    check L3() else D2();
  D2():
    deopt 9 [];
  L3():
    p1 = prom<V +>{
      x = ld x;
      x1 = force? x;
      checkMissing(x1);
      return x1;
    };
    r7 = dyn rle(p1);
    check L4() else D3();
  D3():
    deopt 11 [r7];
  L4():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L5() else L6();
  L0(r9):
    st z = r9;
    rle1 = ldf rle;
    check L8() else D5();
  L5():
    c = ldf c in base;
    r10 = dyn c(TRUE, TRUE, FALSE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE);
    check L7() else D4();
  L6():
    r8 = dyn base1(TRUE, TRUE, FALSE, FALSE, TRUE, FALSE, TRUE, TRUE, TRUE);
    goto L0(r8);
  D4():
    deopt 24 [r10];
  D5():
    deopt 27 [];
  L7():
    goto L0(r10);
  L8():
    p2 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r12 = dyn rle1(p2);
    check L9() else D6();
  D6():
    deopt 29 [r12];
  L9():
    rle2 = ldf rle;
    check L10() else D7();
  D7():
    deopt 31 [];
  L10():
    p3 = prom<V +>{
      sym2 = ldf `as.character`;
      base2 = ldf `as.character` in base;
      guard2 = `==`.4(sym2, base2);
      if guard2 then L1() else L2();
    L0(r14):
      return r14;
    L1():
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      as_character = ldf `as.character` in base;
      r15 = dyn as_character(z3);
      goto L0(r15);
    L2():
      r13 = dyn base2(<sym z>);
      goto L0(r13);
    };
    r17 = dyn rle2(p3);
    check L11() else D8();
  D8():
    deopt 33 [r17];
  L11():
    print = ldf print;
    check L12() else D9();
  D9():
    deopt 35 [];
  L12():
    p5 = prom<V +>{
      rle3 = ldf rle;
      p4 = prom<V +>{
        z4 = ld z;
        z5 = force? z4;
        checkMissing(z5);
        return z5;
      };
      r19 = dyn rle3(p4);
      return r19;
    };
    r21 = dyn print[, prefix](p5, "..| ");
    check L13() else D10();
  D10():
    deopt 39 [r21];
  L13():
    integer = ldf integer;
    check L14() else D11();
  D11():
    deopt 41 [];
  L14():
    r22 = dyn integer(0.0);
    check L15() else D12();
  D12():
    deopt 43 [r22];
  L15():
    st N = r22;
    stopifnot = ldf stopifnot;
    check L16() else D13();
  D13():
    deopt 46 [];
  L16():
    p8 = prom<V +>{
      x2 = ld x;
      x3 = force? x2;
      checkMissing(x3);
      inverse_rle = ldf `inverse.rle`;
      p7 = prom<V +>{
        rle4 = ldf rle;
        p6 = prom<V +>{
          x4 = ld x;
          x5 = force? x4;
          checkMissing(x5);
          return x5;
        };
        r24 = dyn rle4(p6);
        return r24;
      };
      r26 = dyn inverse_rle(p7);
      r27 = `==`(x3, r26);
      return r27;
    };
    p11 = prom<V +>{
      sym3 = ldf identical;
      base3 = ldf identical in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r30):
      return r30;
    L1():
      N = ld N;
      N1 = force? N;
      checkMissing(N1);
      inverse_rle1 = ldf `inverse.rle`;
      p10 = prom<V +>{
        rle5 = ldf rle;
        p9 = prom<V +>{
          N2 = ld N;
          N3 = force? N2;
          checkMissing(N3);
          return N3;
        };
        r32 = dyn rle5(p9);
        return r32;
      };
      r34 = dyn inverse_rle1(p10);
      identical = ldf identical in base;
      r35 = dyn identical(N1, r34, TRUE, TRUE, TRUE, TRUE, FALSE, TRUE, FALSE);
      goto L0(r35);
    L2():
      r29 = dyn base3(<sym N>, <lang inverse.rle(rle(N))>);
      goto L0(r29);
    };
    p14 = prom<V +>{
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      inverse_rle2 = ldf `inverse.rle`;
      p13 = prom<V +>{
        rle6 = ldf rle;
        p12 = prom<V +>{
          z8 = ld z;
          z9 = force? z8;
          checkMissing(z9);
          return z9;
        };
        r38 = dyn rle6(p12);
        return r38;
      };
      r40 = dyn inverse_rle2(p13);
      r41 = `==`(z7, r40);
      return r41;
    };
    r43 = dyn stopifnot(p8, p11, p14);
    check L17() else D14();
  D14():
    deopt 50 [r43];
  L17():
    popenv;
    return r43;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg is_vector:cls, reg r2:V, reg r3:V, reg c:L, reg c2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg c5:L, reg r5:V, reg x3:*, reg x4:V, reg is_list:cls, reg r6:V, reg r7:V, reg c6:L, reg c7:V, reg c9:L, reg stop:cls, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r10:V, reg r11:V, reg x5:*, reg x6:V, reg length:cls, reg r12:V, reg n:*, reg n1:V, reg r13:V, reg c10:L, reg structure:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r14:V, reg r15:V, reg integer:cls, reg r16:V, reg x7:*, reg x8:V, reg list:cls, reg r17:V, reg p:p(V +), reg r19:V, reg x9:*, reg x10:V, reg c11:L, reg x12:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r22:V, reg x13:*, reg x14:V, reg c12:L, reg dx3:V, reg x16:V, reg dr2:V, reg dc1:L, reg dx5:V, reg dx6:V, reg dx7:V, reg n2:*, reg n3:V, reg r23:V, reg __1:cls, reg r24:V, reg r25:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r26:V, reg r27:V, reg which:cls, reg y:*, reg y1:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r28:V, reg y4:V, reg r29:V, reg y5:*, reg y6:V, reg is_na:cls, reg r30:V, reg r31:V, reg p1:p(V +), reg r33:V, reg n4:*, reg n5:V, reg c13:cls, reg r34:V, reg structure1:cls, reg sym6:cls, reg base6:cls, reg guard6:L, reg r35:V, reg r36:V, reg diff:cls, reg sym7:cls, reg base7:cls, reg guard7:L, reg r37:V, reg r38:V, reg i:*, reg i1:V, reg c14:cls, reg r39:V, reg p2:p(V +), reg r41:V, reg x17:*, reg x18:V, reg c15:L, reg x20:V, reg dr4:V, reg dc2:L, reg dx8:V, reg dx9:V, reg i2:*, reg i3:V, reg __2:cls, reg r42:V, reg list1:cls, reg r43:V, reg p3:p(V +), reg r45:V |
    mkenv;
    st x = x;
    sym = ldf `is.vector`;
    base = ldf `is.vector` in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    r3 = `!`(r1);
    c = `as.logical`(r3);
    if c then L15() else L1(c);
  L11():
    x1 = ld x;
    check L13() else D0();
  L12():
    r = dyn base(<sym x>);
    goto L0(r);
  D0():
    deopt 2 [x1];
  L1(c2):
    c9 = `as.logical`(c2);
    if c9 then L21() else L3();
  L13():
    x2 = force? x1;
    checkMissing(x2);
    is_vector = ldf `is.vector` in base;
    r2 = dyn is_vector(x2, "any");
    check L14() else D1();
  L15():
    sym1 = ldf `is.list`;
    base1 = ldf `is.list` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  D1():
    deopt 6 [r2];
  L2(c5, r5):
    r7 = `!`(r5);
    c6 = `as.logical`(r7);
    c7 = `&&`(c5, c6);
    goto L1(c7);
  L3():
    goto L4();
  L4():
    sym2 = ldf length;
    base2 = ldf length in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  L14():
    goto L0(r2);
  L16():
    x3 = ld x;
    check L18() else D2();
  L17():
    r4 = dyn base1(<sym x>);
    goto L2(c, r4);
  L21():
    stop = ldf stop;
    check L22() else D4();
  D2():
    deopt 10 [c, x3];
  D4():
    deopt 17 [];
  L5(r11):
    st n = r11;
    n = ld n;
    check L29() else D8();
  L18():
    x4 = force? x3;
    checkMissing(x4);
    is_list = ldf `is.list` in base;
    r6 = dyn is_list(x4);
    check L19() else D3();
  L22():
    r8 = dyn stop("'x' must be a vector of an atomic type");
    check L23() else D5();
  L25():
    x5 = ld x;
    check L27() else D6();
  L26():
    r10 = dyn base2(<sym x>);
    goto L5(r10);
  D3():
    deopt 13 [c, r6];
  D5():
    deopt 19 [r8];
  D6():
    deopt 24 [x5];
  D8():
    deopt 29 [n];
  L19():
    goto L2(c, r6);
  L23():
    goto L4();
  L27():
    x6 = force? x5;
    checkMissing(x6);
    length = ldf length in base;
    r12 = dyn length(x6);
    check L28() else D7();
  L29():
    n1 = force? n;
    checkMissing(n1);
    r13 = `==`(n1, 0);
    c10 = `as.logical`(r13);
    if c10 then L30() else L6();
  D7():
    deopt 27 [r12];
  L6():
    x9 = ld x;
    check L35() else D11();
  L28():
    goto L5(r12);
  L30():
    structure = ldf structure;
    check L31() else D9();
  D9():
    deopt 34 [];
  D11():
    deopt 42 [x9];
  L31():
    p = prom<V +>{
      sym3 = ldf list;
      base3 = ldf list in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r15):
      return r15;
    L1():
      integer = ldf integer;
      r16 = dyn integer();
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      list = ldf list in base;
      r17 = dyn list(r16, x8);
      goto L0(r17);
    L2():
      r14 = dyn base3[lengths, values](<lang integer()>, <sym x>);
      goto L0(r14);
    };
    r19 = dyn structure[, class](p, "rle");
    check L32() else D10();
  L35():
    x10 = force? x9;
    checkMissing(x10);
    c11 = `is.object`(x10);
    if c11 then L36() else L37(x10);
  D10():
    deopt 38 [r19];
  L8(dx1):
    x13 = ld x;
    check L39() else D12();
  L32():
    popenv;
    return r19;
  L36():
    dr = tryDispatchBuiltin.1("[", x10);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L38() else L37(dr);
  L37(x12):
    __ = ldf `[` in base;
    r22 = dyn __(x12, -1);
    goto L8(r22);
  D12():
    deopt 46 [dx1, x13];
  L38():
    dx = getTryDispatchBuiltinValue(dr);
    goto L8(dx);
  L39():
    x14 = force? x13;
    checkMissing(x14);
    c12 = `is.object`(x14);
    if c12 then L40() else L41(dx1, x14);
  L9(dx6, dx7):
    r25 = `!=`(dx6, dx7);
    st y = r25;
    sym4 = ldf c;
    base4 = ldf c in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L44() else L45();
  L40():
    dr2 = tryDispatchBuiltin.1("[", x14);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L42() else L41(dx1, dr2);
  L41(dx3, x16):
    n2 = ld n;
    check L43() else D13();
  D13():
    deopt 48 [dx3, x16, n2];
  L10(r27):
    st i = r27;
    structure1 = ldf structure;
    check L50() else D18();
  L42():
    dx5 = getTryDispatchBuiltinValue(dr2);
    goto L9(dx1, dx5);
  L43():
    n3 = force? n2;
    checkMissing(n3);
    r23 = `-`(<missing>, n3);
    __1 = ldf `[` in base;
    r24 = dyn __1(x16, r23);
    goto L9(dx3, r24);
  L44():
    which = ldf which;
    check L46() else D14();
  L45():
    r26 = dyn base4(<lang which(`|`(y, is.na(y)))>, <sym n>);
    goto L10(r26);
  D14():
    deopt 57 [];
  D18():
    deopt 66 [];
  L46():
    p1 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      sym5 = ldf `is.na`;
      base5 = ldf `is.na` in base;
      guard5 = `==`.4(sym5, base5);
      if guard5 then L1() else L2();
    L0(y4, r29):
      r31 = `||`(y4, r29);
      return r31;
    L1():
      y5 = ld y;
      y6 = force? y5;
      checkMissing(y6);
      is_na = ldf `is.na` in base;
      r30 = dyn is_na(y6);
      goto L0(y1, r30);
    L2():
      r28 = dyn base5(<sym y>);
      goto L0(y1, r28);
    };
    r33 = dyn which(p1);
    check L47() else D15();
  L50():
    p3 = prom<V +>{
      sym6 = ldf list;
      base6 = ldf list in base;
      guard6 = `==`.4(sym6, base6);
      if guard6 then L2() else L3();
    L0(r36):
      return r36;
    L2():
      diff = ldf diff;
      p2 = prom<V +>{
        sym7 = ldf c;
        base7 = ldf c in base;
        guard7 = `==`.4(sym7, base7);
        if guard7 then L1() else L2();
      L0(r38):
        return r38;
      L1():
        i = ld i;
        i1 = force? i;
        checkMissing(i1);
        c14 = ldf c in base;
        r39 = dyn c14(0, i1);
        goto L0(r39);
      L2():
        r37 = dyn base7(0, <sym i>);
        goto L0(r37);
      };
      r41 = dyn diff(p2);
      x17 = ld x;
      x18 = force? x17;
      checkMissing(x18);
      c15 = `is.object`(x18);
      if c15 then L4() else L5(x18);
    L3():
      r35 = dyn base6[lengths, values](<lang diff(c(0, i))>, <lang `[`(x, i)>);
      goto L0(r35);
    L1(dx9):
      list1 = ldf list in base;
      r43 = dyn list1(r41, dx9);
      goto L0(r43);
    L4():
      dr4 = tryDispatchBuiltin.1("[", x18);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L6() else L5(dr4);
    L5(x20):
      i2 = ld i;
      i3 = force? i2;
      __2 = ldf `[` in base;
      r42 = dyn __2(x20, i3);
      goto L1(r42);
    L6():
      dx8 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx8);
    };
    r45 = dyn structure1[, class](p3, "rle");
    check L51() else D19();
  D15():
    deopt 59 [r33];
  D19():
    deopt 70 [r45];
  L47():
    n4 = ld n;
    check L48() else D16();
  L51():
    popenv;
    return r45;
  D16():
    deopt 60 [n4];
  L48():
    n5 = force? n4;
    checkMissing(n5);
    c13 = ldf c in base;
    r34 = dyn c13(r33, n5);
    check L49() else D17();
  D17():
    deopt 63 [r34];
  L49():
    goto L10(r34);
  }
}