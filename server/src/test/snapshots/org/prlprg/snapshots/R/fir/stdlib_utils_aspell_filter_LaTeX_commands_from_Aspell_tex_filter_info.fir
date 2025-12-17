fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3077716681;
    st aspell_filter_LaTeX_commands_from_Aspell_tex_filter_info = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3077716681(dir) {
  (reg dir:*) -+> V { var dir:*, reg readLines:cls, reg file_path:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg x:*, reg x1:V, reg c:L, reg x3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym:cls, reg base:cls, reg guard:L, reg r4:V, reg x6:V, reg r5:V, reg which:cls, reg x7:*, reg x8:V, reg r6:V, reg p2:p(V +), reg r8:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r9:V, reg x11:V, reg r10:V, reg x12:*, reg x13:V, reg length:cls, reg r11:V, reg seq_int:cls, reg r12:V, reg __:cls, reg r13:V, reg x14:*, reg x15:V, reg c1:L, reg x17:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg x20:V, reg r15:V, reg which1:cls, reg x21:*, reg x22:V, reg r16:V, reg p3:p(V +), reg r18:V, reg c2:L, reg x24:V, reg r20:V, reg dr4:V, reg dc2:L, reg dx4:V, reg x26:V, reg dx5:V, reg __1:cls, reg r21:V, reg seq_int1:cls, reg r22:V, reg __2:cls, reg r23:V, reg substring:cls, reg x27:*, reg x28:V, reg c3:L, reg x30:V, reg dr6:V, reg dc3:L, reg dx6:V, reg dx7:V, reg startsWith:cls, reg x31:*, reg x32:V, reg p4:p(V +), reg r25:V, reg __3:cls, reg r26:V, reg p5:p(V +), reg r28:V |
    mkenv;
    st dir = dir;
    readLines = ldf readLines;
    check L6() else D0();
  D0():
    deopt 1 [];
  L6():
    p1 = prom<V +>{
      file_path = ldf `file.path`;
      p = prom<V +>{
        dir1 = ld dir;
        dir2 = force? dir1;
        checkMissing(dir2);
        return dir2;
      };
      r1 = dyn file_path(p, "modules/filter/tex-filter.info");
      return r1;
    };
    r3 = dyn readLines[, encoding](p1, "UTF-8");
    check L7() else D1();
  D1():
    deopt 5 [r3];
  L7():
    st x = r3;
    x = ld x;
    check L8() else D2();
  D2():
    deopt 7 [x];
  L8():
    x1 = force? x;
    checkMissing(x1);
    c = `is.object`(x1);
    if c then L9() else L10(x1);
  L0(dx1):
    st x = dx1;
    x14 = ld x;
    check L21() else D8();
  L9():
    dr = tryDispatchBuiltin.1("[", x1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L11() else L10(dr);
  L10(x3):
    sym = ldf `seq.int`;
    base = ldf `seq.int` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  D8():
    deopt 25 [x14];
  L1(x6, r5):
    __ = ldf `[` in base;
    r13 = dyn __(x6, r5);
    goto L0(r13);
  L11():
    dx = getTryDispatchBuiltinValue(dr);
    goto L0(dx);
  L12():
    which = ldf which;
    check L14() else D3();
  L13():
    r4 = dyn base(<lang which(`==`(x, "OPTION command"))>, <lang length(x)>);
    goto L1(x3, r4);
  L21():
    x15 = force? x14;
    checkMissing(x15);
    c1 = `is.object`(x15);
    if c1 then L22() else L23(x15);
  D3():
    deopt 12 [x3];
  L3(dx3):
    st x = dx3;
    substring = ldf substring;
    check L33() else D12();
  L14():
    p2 = prom<V +>{
      x7 = ld x;
      x8 = force? x7;
      checkMissing(x8);
      r6 = `==`(x8, "OPTION command");
      return r6;
    };
    r8 = dyn which(p2);
    check L15() else D4();
  L22():
    dr2 = tryDispatchBuiltin.1("[", x15);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L24() else L23(dr2);
  L23(x17):
    sym2 = ldf `seq.int`;
    base2 = ldf `seq.int` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L25() else L26();
  D4():
    deopt 14 [x3, r8];
  D12():
    deopt 42 [];
  L4(x20, r15):
    __2 = ldf `[` in base;
    r23 = dyn __2(x20, r15);
    goto L3(r23);
  L15():
    sym1 = ldf length;
    base1 = ldf length in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L24():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L25():
    which1 = ldf which;
    check L27() else D9();
  L26():
    r14 = dyn base2(1, <lang `[`(which(`==`(x, "ENDOPTION")), 1)>);
    goto L4(x17, r14);
  L33():
    p5 = prom<V +>{
      x27 = ld x;
      x28 = force? x27;
      checkMissing(x28);
      c3 = `is.object`(x28);
      if c3 then L1() else L2(x28);
    L0(dx7):
      return dx7;
    L1():
      dr6 = tryDispatchBuiltin.1("[", x28);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L3() else L2(dr6);
    L2(x30):
      startsWith = ldf startsWith;
      p4 = prom<V +>{
        x31 = ld x;
        x32 = force? x31;
        checkMissing(x32);
        return x32;
      };
      r25 = dyn startsWith(p4, "DEFAULT");
      __3 = ldf `[` in base;
      r26 = dyn __3(x30, r25);
      goto L0(r26);
    L3():
      dx6 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx6);
    };
    r28 = dyn substring(p5, 9);
    check L34() else D13();
  D9():
    deopt 31 [x17];
  D13():
    deopt 45 [r28];
  L2(x11, r10):
    seq_int = ldf `seq.int` in base;
    r12 = dyn seq_int(r8, r10);
    check L20() else D7();
  L16():
    x12 = ld x;
    check L18() else D5();
  L17():
    r9 = dyn base1(<sym x>);
    goto L2(x3, r9);
  L27():
    p3 = prom<V +>{
      x21 = ld x;
      x22 = force? x21;
      checkMissing(x22);
      r16 = `==`(x22, "ENDOPTION");
      return r16;
    };
    r18 = dyn which1(p3);
    check L28() else D10();
  L34():
    popenv;
    return r28;
  D5():
    deopt 17 [x3, x12];
  D7():
    deopt 22 [x11, r12];
  D10():
    deopt 33 [x17, r18];
  L18():
    x13 = force? x12;
    checkMissing(x13);
    length = ldf length in base;
    r11 = dyn length(x13);
    check L19() else D6();
  L20():
    goto L1(x11, r12);
  L28():
    c2 = `is.object`(r18);
    if c2 then L29() else L30(x17, r18);
  D6():
    deopt 20 [x3, r11];
  L5(x26, dx5):
    seq_int1 = ldf `seq.int` in base;
    r22 = dyn seq_int1(1, dx5);
    check L32() else D11();
  L19():
    goto L2(x3, r11);
  L29():
    dr4 = tryDispatchBuiltin.1("[", r18);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L31() else L30(x17, dr4);
  L30(x24, r20):
    __1 = ldf `[` in base;
    r21 = dyn __1(r20, 1);
    goto L5(x24, r21);
  D11():
    deopt 38 [x26, r22];
  L31():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L5(x17, dx4);
  L32():
    goto L4(x26, r22);
  }
}