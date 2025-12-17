fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2044426018;
    st fix = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2044426018(x, `...`) {
  (reg x:*, reg ddd:dots) -+> V { var x:*, var `...`:dots?, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg substitute:cls, reg r2:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg subx:*, reg subx1:V, reg c:L, reg c1:L, reg deparse:cls, reg subx2:*, reg subx3:V, reg p:p(V +), reg r6:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r8:V, reg r9:V, reg subx4:*, reg subx5:V, reg c2:L, reg r10:V, reg c3:L, reg c4:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c8:L, reg r12:V, reg subx6:*, reg subx7:V, reg length:cls, reg r13:V, reg r14:V, reg c9:L, reg c10:V, reg c12:L, reg stop:cls, reg r15:V, reg parent_frame:cls, reg r17:V, reg exists:cls, reg subx8:*, reg subx9:V, reg p1:p(V +), reg parent:*, reg parent1:V, reg p2:p(V +), reg r20:V, reg c13:L, reg edit:cls, reg get:cls, reg subx10:*, reg subx11:V, reg p3:p(V +), reg parent2:*, reg parent3:V, reg p4:p(V +), reg r23:V, reg p5:p(V +), reg subx12:*, reg subx13:V, reg p6:p(V +), reg ddd1:dots?, reg r26:V, reg edit1:cls, reg r28:cls, reg p7:p(V +), reg subx14:*, reg subx15:V, reg p8:p(V +), reg ddd2:dots?, reg r31:V, reg _GlobalEnv:*, reg _GlobalEnv1:V, reg l:*, reg environment__:cls, reg r32:V, reg assign:cls, reg subx16:*, reg subx17:V, reg p9:p(V +), reg x1:*, reg x2:V, reg p10:p(V +), reg _GlobalEnv2:*, reg _GlobalEnv3:V, reg p11:p(V +), reg r36:V |
    mkenv;
    st x = x;
    st `...` = ddd;
    sym = ldf substitute;
    base = ldf substitute in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r1):
    st subx = r1;
    sym1 = ldf `is.name`;
    base1 = ldf `is.name` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L13() else L14();
  L11():
    substitute = ldf substitute in base;
    r2 = dyn substitute(<sym x>);
    goto L0(r2);
  L12():
    r = dyn base(<sym x>);
    goto L0(r);
  L1(r4):
    c1 = `as.logical`(r4);
    if c1 then L16() else L2();
  L13():
    subx = ld subx;
    check L15() else D0();
  L14():
    r3 = dyn base1(<sym subx>);
    goto L1(r3);
  D0():
    deopt 5 [subx];
  L2():
    goto L3();
  L3():
    sym2 = ldf `is.character`;
    base2 = ldf `is.character` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L20() else L21();
  L15():
    subx1 = force? subx;
    checkMissing(subx1);
    c = `is.symbol`(subx1);
    goto L1(c);
  L16():
    deparse = ldf deparse;
    check L17() else D1();
  D1():
    deopt 9 [];
  L4(r9):
    r10 = `!`(r9);
    c3 = `as.logical`(r10);
    if c3 then L5(c3) else L23();
  L17():
    p = prom<V +>{
      subx2 = ld subx;
      subx3 = force? subx2;
      checkMissing(subx3);
      return subx3;
    };
    r6 = dyn deparse(p);
    check L18() else D2();
  L20():
    subx4 = ld subx;
    check L22() else D3();
  L21():
    r8 = dyn base2(<sym subx>);
    goto L4(r8);
  D2():
    deopt 11 [r6];
  D3():
    deopt 16 [subx4];
  L5(c4):
    c12 = `as.logical`(c4);
    if c12 then L29() else L7();
  L18():
    st subx = r6;
    goto L3();
  L22():
    subx5 = force? subx4;
    checkMissing(subx5);
    c2 = `is.character`(subx5);
    goto L4(c2);
  L23():
    sym3 = ldf length;
    base3 = ldf length in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L24() else L25();
  L6(c8, r12):
    r14 = `!=`(r12, 1);
    c9 = `as.logical`(r14);
    c10 = `||`(c8, c9);
    goto L5(c10);
  L7():
    goto L8();
  L8():
    parent_frame = ldf `parent.frame`;
    check L33() else D8();
  L24():
    subx6 = ld subx;
    check L26() else D4();
  L25():
    r11 = dyn base3(<sym subx>);
    goto L6(c3, r11);
  L29():
    stop = ldf stop;
    check L30() else D6();
  D4():
    deopt 22 [c3, subx6];
  D6():
    deopt 30 [];
  D8():
    deopt 36 [];
  L26():
    subx7 = force? subx6;
    checkMissing(subx7);
    length = ldf length in base;
    r13 = dyn length(subx7);
    check L27() else D5();
  L30():
    r15 = dyn stop("'fix' requires a name");
    check L31() else D7();
  L33():
    r17 = dyn parent_frame();
    check L34() else D9();
  D5():
    deopt 25 [c3, r13];
  D7():
    deopt 32 [r15];
  D9():
    deopt 37 [r17];
  L27():
    goto L6(c3, r13);
  L31():
    goto L8();
  L34():
    st parent = r17;
    exists = ldf exists;
    check L35() else D10();
  D10():
    deopt 40 [];
  L35():
    p1 = prom<V +>{
      subx8 = ld subx;
      subx9 = force? subx8;
      checkMissing(subx9);
      return subx9;
    };
    p2 = prom<V +>{
      parent = ld parent;
      parent1 = force? parent;
      checkMissing(parent1);
      return parent1;
    };
    r20 = dyn exists[, envir, inherits](p1, p2, TRUE);
    check L36() else D11();
  D11():
    deopt 46 [r20];
  L36():
    c13 = `as.logical`(r20);
    if c13 then L37() else L9();
  L9():
    edit1 = ldf edit;
    check L41() else D14();
  L10():
    assign = ldf assign;
    check L46() else D19();
  L37():
    edit = ldf edit;
    check L38() else D12();
  D12():
    deopt 48 [];
  D14():
    deopt 56 [];
  D19():
    deopt 71 [];
  L38():
    p5 = prom<V +>{
      get = ldf get;
      p3 = prom<V +>{
        subx10 = ld subx;
        subx11 = force? subx10;
        checkMissing(subx11);
        return subx11;
      };
      p4 = prom<V +>{
        parent2 = ld parent;
        parent3 = force? parent2;
        checkMissing(parent3);
        return parent3;
      };
      r23 = dyn get[, envir](p3, p4);
      return r23;
    };
    p6 = prom<V +>{
      subx12 = ld subx;
      subx13 = force? subx12;
      checkMissing(subx13);
      return subx13;
    };
    ddd1 = ld `...`;
    r26 = dyn edit[, title, `...`](p5, p6, ddd1);
    check L39() else D13();
  L41():
    p7 = prom<V +>{
      r28 = clos inner2708337952;
      return r28;
    };
    p8 = prom<V +>{
      subx14 = ld subx;
      subx15 = force? subx14;
      checkMissing(subx15);
      return subx15;
    };
    ddd2 = ld `...`;
    r31 = dyn edit1[, title, `...`](p7, p8, ddd2);
    check L42() else D15();
  L46():
    p9 = prom<V +>{
      subx16 = ld subx;
      subx17 = force? subx16;
      checkMissing(subx17);
      return subx17;
    };
    p10 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    p11 = prom<V +>{
      _GlobalEnv2 = ld `.GlobalEnv`;
      _GlobalEnv3 = force? _GlobalEnv2;
      checkMissing(_GlobalEnv3);
      return _GlobalEnv3;
    };
    r36 = dyn assign[, , envir](p9, p10, p11);
    check L47() else D20();
  D13():
    deopt 53 [r26];
  D15():
    deopt 61 [r31];
  D20():
    deopt 76 [r36];
  L39():
    st x = r26;
    goto L10();
  L42():
    st x = r31;
    _GlobalEnv = ld `.GlobalEnv`;
    check L43() else D16();
  L47():
    popenv;
    return r36;
  D16():
    deopt 63 [_GlobalEnv];
  L43():
    _GlobalEnv1 = force? _GlobalEnv;
    checkMissing(_GlobalEnv1);
    l = ld x;
    environment__ = ldf `environment<-`;
    check L44() else D17();
  D17():
    deopt 66 [_GlobalEnv1, l, _GlobalEnv1];
  L44():
    r32 = dyn environment__(l, NULL, _GlobalEnv1);
    check L45() else D18();
  D18():
    deopt 68 [_GlobalEnv1, r32];
  L45():
    st x = r32;
    goto L10();
  }
}
fun inner2708337952() {
  () -+> V { |
    mkenv;
    popenv;
    return NULL;
  }
}