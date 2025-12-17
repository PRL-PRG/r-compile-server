fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.Rd_get_argument_table` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg _Rd_get_section:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg x3:*, reg x4:V, reg length:cls, reg r4:V, reg r5:V, reg c:L, reg matrix:cls, reg character:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg x5:*, reg x6:V, reg c1:L, reg x8:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg x9:*, reg x10:V, reg p2:p(V +), reg r12:V, reg r13:V, reg __:cls, reg r14:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r15:V, reg r16:V, reg x11:*, reg x12:V, reg length1:cls, reg r17:V, reg r18:V, reg c2:L, reg matrix1:cls, reg character1:cls, reg r19:V, reg p3:p(V +), reg r21:V, reg lapply:cls, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg lengths:cls, reg x17:*, reg x18:V, reg p4:p(V +), reg r25:V, reg r26:V, reg __1:cls, reg r27:V, reg p5:p(V +), reg vapply:*, reg vapply1:V, reg p6:p(V +), reg r30:cls, reg p7:p(V +), reg r32:V, reg matrix2:cls, reg unlist:cls, reg x19:*, reg x20:V, reg p8:p(V +), reg r34:V, reg p9:p(V +), reg r36:V |
    mkenv;
    st x = x;
    _Rd_get_section = ldf `.Rd_get_section`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r1 = dyn _Rd_get_section(p, "arguments");
    check L8() else D1();
  D1():
    deopt 4 [r1];
  L8():
    st x = r1;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L9() else L10();
  L0(r3):
    r5 = `!`(r3);
    c = `as.logical`(r5);
    if c then L13() else L1();
  L9():
    x3 = ld x;
    check L11() else D2();
  L10():
    r2 = dyn base(<sym x>);
    goto L0(r2);
  D2():
    deopt 8 [x3];
  L1():
    x5 = ld x;
    check L18() else D6();
  L11():
    x4 = force? x3;
    checkMissing(x4);
    length = ldf length in base;
    r4 = dyn length(x4);
    check L12() else D3();
  L13():
    matrix = ldf matrix;
    check L14() else D4();
  D3():
    deopt 11 [r4];
  D4():
    deopt 14 [];
  D6():
    deopt 22 [x5];
  L12():
    goto L0(r4);
  L14():
    p1 = prom<V +>{
      character = ldf character;
      r6 = dyn character();
      return r6;
    };
    r8 = dyn matrix(p1, 0, 2);
    check L15() else D5();
  L18():
    x6 = force? x5;
    checkMissing(x6);
    c1 = `is.object`(x6);
    if c1 then L19() else L20(x6);
  D5():
    deopt 18 [r8];
  L3(dx1):
    st x = dx1;
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L24() else L25();
  L15():
    popenv;
    return r8;
  L19():
    dr = tryDispatchBuiltin.1("[", x6);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L21() else L20(dr);
  L20(x8):
    RdTags = ldf RdTags;
    check L22() else D7();
  D7():
    deopt 25 [x8];
  L4(r16):
    r18 = `!`(r16);
    c2 = `as.logical`(r18);
    if c2 then L28() else L5();
  L21():
    dx = getTryDispatchBuiltinValue(dr);
    goto L3(dx);
  L22():
    p2 = prom<V +>{
      x9 = ld x;
      x10 = force? x9;
      checkMissing(x10);
      return x10;
    };
    r12 = dyn RdTags(p2);
    check L23() else D8();
  L24():
    x11 = ld x;
    check L26() else D9();
  L25():
    r15 = dyn base1(<sym x>);
    goto L4(r15);
  D8():
    deopt 27 [x8, r12];
  D9():
    deopt 34 [x11];
  L5():
    lapply = ldf lapply;
    check L33() else D13();
  L23():
    r13 = `==`(r12, "\\item");
    __ = ldf `[` in base;
    r14 = dyn __(x8, r13);
    goto L3(r14);
  L26():
    x12 = force? x11;
    checkMissing(x12);
    length1 = ldf length in base;
    r17 = dyn length1(x12);
    check L27() else D10();
  L28():
    matrix1 = ldf matrix;
    check L29() else D11();
  D10():
    deopt 37 [r17];
  D11():
    deopt 40 [];
  D13():
    deopt 49 [];
  L27():
    goto L4(r17);
  L29():
    p3 = prom<V +>{
      character1 = ldf character;
      r19 = dyn character1();
      return r19;
    };
    r21 = dyn matrix1(p3, 0, 2);
    check L30() else D12();
  L33():
    p5 = prom<V +>{
      x13 = ld x;
      x14 = force? x13;
      checkMissing(x14);
      c3 = `is.object`(x14);
      if c3 then L1() else L2(x14);
    L0(dx3):
      return dx3;
    L1():
      dr2 = tryDispatchBuiltin.1("[", x14);
      dc1 = getTryDispatchBuiltinDispatched(dr2);
      if dc1 then L3() else L2(dr2);
    L2(x16):
      lengths = ldf lengths;
      p4 = prom<V +>{
        x17 = ld x;
        x18 = force? x17;
        checkMissing(x18);
        return x18;
      };
      r25 = dyn lengths(p4);
      r26 = `==`(r25, 2);
      __1 = ldf `[` in base;
      r27 = dyn __1(x16, r26);
      goto L0(r27);
    L3():
      dx2 = getTryDispatchBuiltinValue(dr2);
      goto L0(dx2);
    };
    p6 = prom<V +>{
      vapply = ld vapply;
      vapply1 = force? vapply;
      checkMissing(vapply1);
      return vapply1;
    };
    p7 = prom<V +>{
      r30 = clos inner1468096329;
      return r30;
    };
    r32 = dyn lapply[, , `FUN.VALUE`, ](p5, p6, "", p7);
    check L34() else D14();
  D12():
    deopt 44 [r21];
  D14():
    deopt 55 [r32];
  L30():
    popenv;
    return r21;
  L34():
    st x = r32;
    matrix2 = ldf matrix;
    check L35() else D15();
  D15():
    deopt 58 [];
  L35():
    p9 = prom<V +>{
      unlist = ldf unlist;
      p8 = prom<V +>{
        x19 = ld x;
        x20 = force? x19;
        checkMissing(x20);
        return x20;
      };
      r34 = dyn unlist(p8);
      return r34;
    };
    r36 = dyn matrix2[, ncol, byrow](p9, 2, TRUE);
    check L36() else D16();
  D16():
    deopt 64 [r36];
  L36():
    popenv;
    return r36;
  }
}
fun inner1468096329(block) {
  (reg block:*) -+> V { var block:*, reg _Rd_deparse:cls, reg block1:*, reg block2:V, reg c:L, reg block4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg RdTags:cls, reg block5:*, reg block6:V, reg p:p(V +), reg r1:V, reg r2:V, reg __:cls, reg r3:V, reg p1:p(V +), reg r5:V |
    mkenv;
    st block = block;
    _Rd_deparse = ldf `.Rd_deparse`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p1 = prom<V +>{
      block1 = ld block;
      block2 = force? block1;
      checkMissing(block2);
      c = `is.object`(block2);
      if c then L1() else L2(block2);
    L0(dx1):
      return dx1;
    L1():
      dr = tryDispatchBuiltin.1("[", block2);
      dc = getTryDispatchBuiltinDispatched(dr);
      if dc then L3() else L2(dr);
    L2(block4):
      RdTags = ldf RdTags;
      p = prom<V +>{
        block5 = ld block;
        block6 = force? block5;
        checkMissing(block6);
        return block6;
      };
      r1 = dyn RdTags(p);
      r2 = `!=`(r1, "COMMENT");
      __ = ldf `[` in base;
      r3 = dyn __(block4, r2);
      goto L0(r3);
    L3():
      dx = getTryDispatchBuiltinValue(dr);
      goto L0(dx);
    };
    r5 = dyn _Rd_deparse(p1);
    check L1() else D1();
  D1():
    deopt 3 [r5];
  L1():
    popenv;
    return r5;
  }
}