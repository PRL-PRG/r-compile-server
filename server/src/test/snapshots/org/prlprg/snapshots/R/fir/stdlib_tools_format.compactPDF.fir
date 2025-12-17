fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2496211114;
    st `format.compactPDF` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2496211114(x, ratio, diff, `...`) {
  (reg x:*, reg ratio:*, reg diff:*, reg ddd:dots) -+> V { var x:*, var ratio:*, reg ratio_isMissing:L, reg ratio_orDefault:*, var diff:*, reg diff_isMissing:L, reg diff_orDefault:*, var `...`:dots?, reg nrow:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg character:cls, reg r3:V, reg x3:*, reg x4:V, reg c1:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg with:cls, reg x10:*, reg x11:V, reg p1:p(V +), reg new:*, reg new1:V, reg old:*, reg old1:V, reg r9:V, reg ratio1:*, reg ratio2:V, reg r10:V, reg new2:*, reg new3:V, reg old2:*, reg old3:V, reg diff1:*, reg diff2:V, reg r11:V, reg r12:V, reg r13:V, reg p2:p(V +), reg r15:V, reg __:cls, reg r16:V, reg nrow1:cls, reg z:*, reg z1:V, reg p3:p(V +), reg r18:V, reg r19:V, reg c2:L, reg character1:cls, reg r20:V, reg lapply:cls, reg y:*, reg y1:V, reg p4:p(V +), reg r24:cls, reg p5:p(V +), reg r26:V, reg l:*, reg c3:L, reg r28:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg ___:cls, reg r31:V, reg y2:*, reg y3:V, reg c4:L, reg y5:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r32:V, reg r33:V, reg lapply1:cls, reg y6:*, reg y7:V, reg c5:L, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg large:*, reg large1:V, reg __1:cls, reg r34:V, reg p6:p(V +), reg r36:cls, reg p7:p(V +), reg r38:V, reg l3:*, reg c6:L, reg r40:V, reg l5:*, reg dr8:V, reg dc4:L, reg dx8:V, reg dx9:V, reg large2:*, reg large3:V, reg ___1:cls, reg r43:V, reg paste:cls, reg sQuote:cls, reg basename:cls, reg row_names:cls, reg y10:*, reg y11:V, reg p8:p(V +), reg r45:V, reg p9:p(V +), reg r47:V, reg p10:p(V +), reg r49:V, reg p11:p(V +), reg z2:*, reg z3:V, reg c7:L, reg dr10:V, reg dc5:L, reg dx10:V, reg dx11:V, reg __2:cls, reg r51:V, reg p12:p(V +), reg z6:*, reg z7:V, reg c8:L, reg dr12:V, reg dc6:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r53:V, reg p13:p(V +), reg r55:V |
    mkenv;
    st x = x;
    ratio_isMissing = missing.0(ratio);
    if ratio_isMissing then L0(0.9) else L0(ratio);
  L0(ratio_orDefault):
    st ratio = ratio_orDefault;
    diff_isMissing = missing.0(diff);
    if diff_isMissing then L1(10000.0) else L1(diff);
  L1(diff_orDefault):
    st diff = diff_orDefault;
    st `...` = ddd;
    nrow = ldf nrow;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn nrow(p);
    check L11() else D1();
  D1():
    deopt 3 [r1];
  L11():
    r2 = `!`(r1);
    c = `as.logical`(r2);
    if c then L12() else L2();
  L2():
    x3 = ld x;
    check L17() else D4();
  L12():
    character = ldf character;
    check L13() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 11 [x3];
  L13():
    r3 = dyn character();
    check L14() else D3();
  L17():
    x4 = force? x3;
    checkMissing(x4);
    c1 = `is.object`(x4);
    if c1 then L18() else L19(x4);
  D3():
    deopt 7 [r3];
  L4(dx1):
    st y = dx1;
    st z = dx1;
    nrow1 = ldf nrow;
    check L25() else D7();
  L14():
    popenv;
    return r3;
  L18():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L20() else L19(dr);
  L19(x6):
    sym = ldf with;
    base = ldf with in base;
    guard = `==`.4(sym, base);
    if guard then L21() else L22();
  D7():
    deopt 25 [];
  L5(r7):
    __ = ldf `[` in base;
    r16 = dyn __(x4, r7, <missing>);
    goto L4(r16);
  L20():
    dx = getTryDispatchBuiltinValue(dr);
    goto L4(dx);
  L21():
    with = ldf with;
    check L23() else D5();
  L22():
    r6 = dyn base(<sym x>, <lang `&`(`<`(`/`(new, old), ratio), `<`(new, `-`(old, diff)))>);
    goto L5(r6);
  L25():
    p3 = prom<V +>{
      z = ld z;
      z1 = force? z;
      checkMissing(z1);
      return z1;
    };
    r18 = dyn nrow1(p3);
    check L26() else D8();
  D5():
    deopt 15 [x6];
  D8():
    deopt 27 [r18];
  L23():
    p1 = prom<V +>{
      x10 = ld x;
      x11 = force? x10;
      checkMissing(x11);
      return x11;
    };
    p2 = prom<V +>{
      new = ld new;
      new1 = force? new;
      checkMissing(new1);
      old = ld old;
      old1 = force? old;
      checkMissing(old1);
      r9 = `/`(new1, old1);
      ratio1 = ld ratio;
      ratio2 = force? ratio1;
      checkMissing(ratio2);
      r10 = `<`(r9, ratio2);
      new2 = ld new;
      new3 = force? new2;
      checkMissing(new3);
      old2 = ld old;
      old3 = force? old2;
      checkMissing(old3);
      diff1 = ld diff;
      diff2 = force? diff1;
      checkMissing(diff2);
      r11 = `-`(old3, diff2);
      r12 = `<`(new3, r11);
      r13 = `&&`(r10, r12);
      return r13;
    };
    r15 = dyn with(p1, p2);
    check L24() else D6();
  L26():
    r19 = `!`(r18);
    c2 = `as.logical`(r19);
    if c2 then L27() else L6();
  D6():
    deopt 18 [x6, r15];
  L6():
    lapply = ldf lapply;
    check L32() else D11();
  L24():
    goto L5(r15);
  L27():
    character1 = ldf character;
    check L28() else D9();
  D9():
    deopt 30 [];
  D11():
    deopt 36 [];
  L28():
    r20 = dyn character1();
    check L29() else D10();
  L32():
    p4 = prom<V +>{
      y = ld y;
      y1 = force? y;
      checkMissing(y1);
      return y1;
    };
    p5 = prom<V +>{
      r24 = clos inner2501545716;
      return r24;
    };
    r26 = dyn lapply(p4, p5);
    check L33() else D12();
  D10():
    deopt 31 [r20];
  D12():
    deopt 39 [r26];
  L29():
    popenv;
    return r20;
  L33():
    l = ld z;
    c3 = `is.object`(l);
    if c3 then L34() else L35(r26);
  L8(dx3):
    st z = dx3;
    y2 = ld y;
    check L37() else D13();
  L34():
    dr2 = tryDispatchBuiltin.0("[<-", l, r26);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L36() else L35(r26);
  L35(r28):
    ___ = ldf `[<-` in base;
    r31 = dyn ___(l, <missing>, r26);
    goto L8(r31);
  D13():
    deopt 45 [y2];
  L36():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L8(dx2);
  L37():
    y3 = force? y2;
    checkMissing(y3);
    c4 = `is.object`(y3);
    if c4 then L39() else L40(y3);
  L38(dx5):
    r33 = `>=`(dx5, 1048576.0);
    st large = r33;
    lapply1 = ldf lapply;
    check L42() else D14();
  L39():
    dr4 = tryDispatchBuiltin.1("$", y3);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L41() else L40(dr4);
  L40(y5):
    r32 = `$`(y5, <sym new>);
    goto L38(r32);
  D14():
    deopt 52 [];
  L41():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L38(dx4);
  L42():
    p6 = prom<V +>{
      y6 = ld y;
      y7 = force? y6;
      checkMissing(y7);
      c5 = `is.object`(y7);
      if c5 then L1() else L2();
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", y7);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2();
    L2():
      large = ld large;
      large1 = force? large;
      __1 = ldf `[` in base;
      r34 = dyn __1(y7, large1, <missing>);
      goto L0(r34);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    p7 = prom<V +>{
      r36 = clos inner2501545716;
      return r36;
    };
    r38 = dyn lapply1(p6, p7);
    check L43() else D15();
  D15():
    deopt 55 [r38];
  L43():
    l3 = ld z;
    c6 = `is.object`(l3);
    if c6 then L44() else L45(r38, l3);
  L9(dx9):
    st z = dx9;
    paste = ldf paste;
    check L48() else D17();
  L44():
    dr8 = tryDispatchBuiltin.0("[<-", l3, r38);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L46() else L45(r38, dr8);
  L45(r40, l5):
    large2 = ld large;
    check L47() else D16();
  D16():
    deopt 57 [r40, l5, r38, large2];
  D17():
    deopt 64 [];
  L46():
    dx8 = getTryDispatchBuiltinValue(dr8);
    goto L9(dx8);
  L47():
    large3 = force? large2;
    ___1 = ldf `[<-` in base;
    r43 = dyn ___1(l3, large3, <missing>, r38);
    goto L9(r43);
  L48():
    p11 = prom<V +>{
      sQuote = ldf sQuote;
      p10 = prom<V +>{
        basename = ldf basename;
        p9 = prom<V +>{
          row_names = ldf `row.names`;
          p8 = prom<V +>{
            y10 = ld y;
            y11 = force? y10;
            checkMissing(y11);
            return y11;
          };
          r45 = dyn row_names(p8);
          return r45;
        };
        r47 = dyn basename(p9);
        return r47;
      };
      r49 = dyn sQuote(p10);
      return r49;
    };
    p12 = prom<V +>{
      z2 = ld z;
      z3 = force? z2;
      checkMissing(z3);
      c7 = `is.object`(z3);
      if c7 then L1() else L2();
    L0(dx11):
      return dx11;
    L1():
      dr10 = tryDispatchBuiltin.1("[", z3);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L3() else L2();
    L2():
      __2 = ldf `[` in base;
      r51 = dyn __2(z3, <missing>, 1);
      goto L0(r51);
    L3():
      dx10 = getTryDispatchBuiltinValue(dr10);
      goto L0(dx10);
    };
    p13 = prom<V +>{
      z6 = ld z;
      z7 = force? z6;
      checkMissing(z7);
      c8 = `is.object`(z7);
      if c8 then L1() else L2();
    L0(dx13):
      return dx13;
    L1():
      dr12 = tryDispatchBuiltin.1("[", z7);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L3() else L2();
    L2():
      __3 = ldf `[` in base;
      r53 = dyn __3(z7, <missing>, 2);
      goto L0(r53);
    L3():
      dx12 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx12);
    };
    r55 = dyn paste("  compacted", p11, "from", p12, "to", p13);
    check L49() else D18();
  D18():
    deopt 71 [r55];
  L49():
    popenv;
    return r55;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg sprintf:cls, reg x1:*, reg x2:V, reg r:V, reg p:p(V +), reg r2:V |
    mkenv;
    st x = x;
    sprintf = ldf sprintf;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      r = `/`(x2, 1024.0);
      return r;
    };
    r2 = dyn sprintf("%.0fKb", p);
    check L1() else D1();
  D1():
    deopt 4 [r2];
  L1():
    popenv;
    return r2;
  }
}