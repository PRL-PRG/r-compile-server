fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st argsAnywhere = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg tryCatch:cls, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg x1:*, reg x2:V, reg c:L, reg r2:V, reg p:p(V +), reg r4:cls, reg p1:p(V +), reg r6:V, reg c1:L, reg sym1:cls, reg base1:cls, reg guard1:L, reg r7:V, reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg substitute:cls, reg r11:V, reg as_character:cls, reg r12:V, reg getAnywhere:cls, reg x3:*, reg x4:V, reg p2:p(V +), reg r15:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r16:V, reg r17:V, reg fs:*, reg fs1:V, reg c2:L, reg fs3:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r18:V, reg r19:V, reg sum:cls, reg r20:V, reg r21:V, reg c3:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg fs4:*, reg fs5:V, reg c4:L, reg fs7:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r26:V, reg r27:V, reg sum1:cls, reg r28:V, reg r29:V, reg c5:L, reg sapply:cls, reg fs8:*, reg fs9:V, reg c6:L, reg fs11:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r30:V, reg c7:L, reg dx7:V, reg dr6:V, reg dc3:L, reg dx8:V, reg dx9:V, reg fs12:*, reg fs13:V, reg c8:L, reg dx11:V, reg fs15:V, reg dr8:V, reg dc4:L, reg dx13:V, reg dx14:V, reg dx15:V, reg r31:V, reg r32:V, reg __:cls, reg r33:V, reg p3:p(V +), reg r35:cls, reg p4:p(V +), reg r37:V, reg args:cls, reg fs16:*, reg fs17:V, reg c9:L, reg fs19:V, reg dr10:V, reg dc5:L, reg dx16:V, reg dx17:V, reg r38:V, reg c10:L, reg dx19:V, reg dr12:V, reg dc6:L, reg dx20:V, reg dx21:V, reg __1:cls, reg r39:V, reg p5:p(V +), reg r41:V |
    mkenv;
    st x = x;
    tryCatch = ldf tryCatch;
    check L9() else D0();
  D0():
    deopt 1 [];
  L9():
    p = prom<V +>{
      sym = ldf `is.character`;
      base = ldf `is.character` in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r1):
      r2 = `!`(r1);
      return r2;
    L1():
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      c = `is.character`(x2);
      goto L0(c);
    L2():
      r = dyn base(<sym x>);
      goto L0(r);
    };
    p1 = prom<V +>{
      r4 = clos inner3708401697;
      return r4;
    };
    r6 = dyn tryCatch[, error](p, p1);
    check L10() else D1();
  D1():
    deopt 5 [r6];
  L10():
    c1 = `as.logical`(r6);
    if c1 then L11() else L0();
  L0():
    goto L3();
  L3():
    getAnywhere = ldf getAnywhere;
    check L18() else D3();
  L11():
    sym1 = ldf `as.character`;
    base1 = ldf `as.character` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L12() else L13();
  D3():
    deopt 17 [];
  L1(r8):
    st x = r8;
    goto L3();
  L12():
    sym2 = ldf substitute;
    base2 = ldf substitute in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L14() else L15();
  L13():
    r7 = dyn base1(<lang substitute(x)>);
    goto L1(r7);
  L18():
    p2 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    r15 = dyn getAnywhere(p2);
    check L19() else D4();
  D4():
    deopt 19 [r15];
  L2(r10):
    as_character = ldf `as.character` in base;
    r12 = dyn as_character(r10);
    check L16() else D2();
  L14():
    substitute = ldf substitute in base;
    r11 = dyn substitute(<sym x>);
    goto L2(r11);
  L15():
    r9 = dyn base2(<sym x>);
    goto L2(r9);
  L19():
    st fs = r15;
    sym3 = ldf sum;
    base3 = ldf sum in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L20() else L21();
  D2():
    deopt 12 [r12];
  L4(r17):
    r21 = `==`(r17, 0);
    c3 = `as.logical`(r21);
    if c3 then L28() else L5();
  L16():
    goto L1(r12);
  L20():
    fs = ld fs;
    check L22() else D5();
  L21():
    r16 = dyn base3(<lang `!`(`$`(fs, dups))>);
    goto L4(r16);
  D5():
    deopt 23 [fs];
  L5():
    sym4 = ldf sum;
    base4 = ldf sum in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L31() else L32();
  L22():
    fs1 = force? fs;
    checkMissing(fs1);
    c2 = `is.object`(fs1);
    if c2 then L24() else L25(fs1);
  L28():
    popenv;
    return NULL;
  L7(r25):
    r29 = `>`(r25, 1);
    c5 = `as.logical`(r29);
    if c5 then L39() else L8();
  L23(dx1):
    r19 = `!`(dx1);
    sum = ldf sum in base;
    r20 = dyn sum(r19);
    check L27() else D6();
  L24():
    dr = tryDispatchBuiltin.1("$", fs1);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(fs3):
    r18 = `$`(fs3, <sym dups>);
    goto L23(r18);
  L31():
    fs4 = ld fs;
    check L33() else D7();
  L32():
    r24 = dyn base4(<lang `!`(`$`(fs, dups))>);
    goto L7(r24);
  D6():
    deopt 28 [r20];
  D7():
    deopt 38 [fs4];
  L8():
    args = ldf args;
    check L43() else D11();
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L27():
    goto L4(r20);
  L33():
    fs5 = force? fs4;
    checkMissing(fs5);
    c4 = `is.object`(fs5);
    if c4 then L35() else L36(fs5);
  L39():
    sapply = ldf sapply;
    check L40() else D9();
  D9():
    deopt 47 [];
  D11():
    deopt 52 [];
  L34(dx3):
    r27 = `!`(dx3);
    sum1 = ldf sum in base;
    r28 = dyn sum1(r27);
    check L38() else D8();
  L35():
    dr2 = tryDispatchBuiltin.1("$", fs5);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L37() else L36(dr2);
  L36(fs7):
    r26 = `$`(fs7, <sym dups>);
    goto L34(r26);
  L40():
    p3 = prom<V +>{
      fs8 = ld fs;
      fs9 = force? fs8;
      checkMissing(fs9);
      c6 = `is.object`(fs9);
      if c6 then L2() else L3(fs9);
    L1(dx5):
      c7 = `is.object`(dx5);
      if c7 then L5() else L6(dx5);
    L2():
      dr4 = tryDispatchBuiltin.1("$", fs9);
      dc2 = getTryDispatchBuiltinDispatched(dr4);
      if dc2 then L4() else L3(dr4);
    L3(fs11):
      r30 = `$`(fs11, <sym objs>);
      goto L1(r30);
    L0(dx9):
      return dx9;
    L4():
      dx4 = getTryDispatchBuiltinValue(dr4);
      goto L1(dx4);
    L5():
      dr6 = tryDispatchBuiltin.1("[", dx5);
      dc3 = getTryDispatchBuiltinDispatched(dr6);
      if dc3 then L7() else L6(dr6);
    L6(dx7):
      fs12 = ld fs;
      fs13 = force? fs12;
      checkMissing(fs13);
      c8 = `is.object`(fs13);
      if c8 then L9() else L10(dx7, fs13);
    L7():
      dx8 = getTryDispatchBuiltinValue(dr6);
      goto L0(dx8);
    L8(dx14, dx15):
      r32 = `!`(dx15);
      __ = ldf `[` in base;
      r33 = dyn __(dx14, r32);
      goto L0(r33);
    L9():
      dr8 = tryDispatchBuiltin.1("$", fs13);
      dc4 = getTryDispatchBuiltinDispatched(dr8);
      if dc4 then L11() else L10(dx7, dr8);
    L10(dx11, fs15):
      r31 = `$`(fs15, <sym dups>);
      goto L8(dx11, r31);
    L11():
      dx13 = getTryDispatchBuiltinValue(dr8);
      goto L8(dx7, dx13);
    };
    p4 = prom<V +>{
      r35 = clos inner1384373858;
      return r35;
    };
    r37 = dyn sapply(p3, p4);
    check L41() else D10();
  L43():
    p5 = prom<V +>{
      fs16 = ld fs;
      fs17 = force? fs16;
      checkMissing(fs17);
      c9 = `is.object`(fs17);
      if c9 then L2() else L3(fs17);
    L1(dx17):
      c10 = `is.object`(dx17);
      if c10 then L5() else L6(dx17);
    L2():
      dr10 = tryDispatchBuiltin.1("$", fs17);
      dc5 = getTryDispatchBuiltinDispatched(dr10);
      if dc5 then L4() else L3(dr10);
    L3(fs19):
      r38 = `$`(fs19, <sym objs>);
      goto L1(r38);
    L0(dx21):
      return dx21;
    L4():
      dx16 = getTryDispatchBuiltinValue(dr10);
      goto L1(dx16);
    L5():
      dr12 = tryDispatchBuiltin.1("[[", dx17);
      dc6 = getTryDispatchBuiltinDispatched(dr12);
      if dc6 then L7() else L6(dr12);
    L6(dx19):
      __1 = ldf `[[` in base;
      r39 = dyn __1(dx19, 1);
      goto L0(r39);
    L7():
      dx20 = getTryDispatchBuiltinValue(dr12);
      goto L0(dx20);
    };
    r41 = dyn args(p5);
    check L44() else D12();
  D8():
    deopt 43 [r28];
  D10():
    deopt 50 [r37];
  D12():
    deopt 54 [r41];
  L37():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L34(dx2);
  L38():
    goto L7(r28);
  L41():
    popenv;
    return r37;
  L44():
    popenv;
    return r41;
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:* |
    mkenv;
    st e = e;
    popenv;
    return TRUE;
  }
}
fun inner1384373858(f) {
  (reg f:*) -+> V { var f:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg f1:*, reg f2:V, reg is_function:cls, reg r2:V, reg c:L, reg args:cls, reg f3:*, reg f4:V, reg p:p(V +), reg r4:V |
    mkenv;
    st f = f;
    sym = ldf `is.function`;
    base = ldf `is.function` in base;
    guard = `==`.4(sym, base);
    if guard then L2() else L3();
  L0(r1):
    c = `as.logical`(r1);
    if c then L6() else L1();
  L2():
    f1 = ld f;
    check L4() else D0();
  L3():
    r = dyn base(<sym f>);
    goto L0(r);
  D0():
    deopt 2 [f1];
  L1():
    invisible.0();
    popenv;
    return NULL;
  L4():
    f2 = force? f1;
    checkMissing(f2);
    is_function = ldf `is.function` in base;
    r2 = dyn is_function(f2);
    check L5() else D1();
  L6():
    args = ldf args;
    check L7() else D2();
  D1():
    deopt 5 [r2];
  D2():
    deopt 7 [];
  L5():
    goto L0(r2);
  L7():
    p = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r4 = dyn args(p);
    check L8() else D3();
  D3():
    deopt 9 [r4];
  L8():
    popenv;
    return r4;
  }
}