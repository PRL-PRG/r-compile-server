fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner319061036;
    st `print.checkRd` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner319061036(x, minlevel, `...`) {
  (reg x:*, reg minlevel:*, reg ddd:dots) -+> V { var x:*, var minlevel:*, reg minlevel_isMissing:L, reg minlevel_orDefault:*, reg p:p(V +), var `...`:dots?, reg startsWith:cls, reg x1:*, reg x2:V, reg p1:p(V +), reg r2:V, reg x3:*, reg x4:V, reg c:L, reg x6:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg fromParse:*, reg fromParse1:V, reg __:cls, reg r3:V, reg x7:*, reg x8:V, reg c1:L, reg x10:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg fromParse2:*, reg fromParse3:V, reg r4:V, reg __1:cls, reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg sub:cls, reg x11:*, reg x12:V, reg p2:p(V +), reg r9:V, reg as_numeric:cls, reg r10:V, reg minlevel1:*, reg minlevel2:V, reg r11:V, reg c2:L, reg x13:*, reg x14:V, reg c3:L, reg x16:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg levs:*, reg levs1:V, reg minlevel3:*, reg minlevel4:V, reg r12:V, reg __2:cls, reg r13:V, reg dx6:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg x17:*, reg x18:V, reg x19:*, reg x20:V, reg c4:L, reg x22:V, reg dr6:V, reg dc3:L, reg dx7:V, reg dx8:V, reg levs2:*, reg levs3:V, reg minlevel5:*, reg minlevel6:V, reg r15:V, reg __3:cls, reg r16:V, reg c5:cls, reg r17:V, reg writeLines:cls, reg unique:cls, reg xx:*, reg xx1:V, reg p3:p(V +), reg r19:V, reg p4:p(V +), reg r21:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r22:V, reg r23:V, reg x23:*, reg x24:V, reg invisible:cls, reg r24:V |
    mkenv;
    st x = x;
    minlevel_isMissing = missing.0(minlevel);
    if minlevel_isMissing then L0() else L1(minlevel);
  L0():
    p = prom<V +>{
      return -Infinity;
    };
    goto L1(p);
  L1(minlevel_orDefault):
    st minlevel = minlevel_orDefault;
    st `...` = ddd;
    startsWith = ldf startsWith;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p1 = prom<V +>{
      x1 = ld x;
      x2 = force? x1;
      checkMissing(x2);
      return x2;
    };
    r2 = dyn startsWith(p1, "prepare_Rd");
    check L11() else D1();
  D1():
    deopt 4 [r2];
  L11():
    st fromParse = r2;
    x3 = ld x;
    check L12() else D2();
  D2():
    deopt 6 [x3];
  L12():
    x4 = force? x3;
    checkMissing(x4);
    c = `is.object`(x4);
    if c then L13() else L14(x4);
  L2(dx1):
    st x1 = dx1;
    x7 = ld x;
    check L17() else D4();
  L13():
    dr = tryDispatchBuiltin.1("[", x4);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(dr);
  L14(x6):
    fromParse = ld fromParse;
    check L16() else D3();
  D3():
    deopt 8 [x6, fromParse];
  D4():
    deopt 12 [x7];
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L16():
    fromParse1 = force? fromParse;
    __ = ldf `[` in base;
    r3 = dyn __(x6, fromParse1);
    goto L2(r3);
  L17():
    x8 = force? x7;
    checkMissing(x8);
    c1 = `is.object`(x8);
    if c1 then L18() else L19(x8);
  L3(dx3):
    st x2 = dx3;
    sym = ldf `as.numeric`;
    base = ldf `as.numeric` in base;
    guard = `==`.4(sym, base);
    if guard then L22() else L23();
  L18():
    dr2 = tryDispatchBuiltin.1("[", x8);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L20() else L19(dr2);
  L19(x10):
    fromParse2 = ld fromParse;
    check L21() else D5();
  D5():
    deopt 14 [x10, fromParse2];
  L4(r7):
    st levs = r7;
    minlevel1 = ld minlevel;
    check L27() else D9();
  L20():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L21():
    fromParse3 = force? fromParse2;
    checkMissing(fromParse3);
    r4 = `!`(fromParse3);
    __1 = ldf `[` in base;
    r5 = dyn __1(x10, r4);
    goto L3(r5);
  L22():
    sub = ldf sub;
    check L24() else D6();
  L23():
    r6 = dyn base(<lang sub("^checkRd: \\(([-0123456789]+)(.*)", "\\1", x2)>);
    goto L4(r6);
  D6():
    deopt 22 [];
  D9():
    deopt 30 [minlevel1];
  L24():
    p2 = prom<V +>{
      x11 = ld x2;
      x12 = force? x11;
      checkMissing(x12);
      return x12;
    };
    r9 = dyn sub("^checkRd: \\(([-0123456789]+)(.*)", "\\1", p2);
    check L25() else D7();
  L27():
    minlevel2 = force? minlevel1;
    checkMissing(minlevel2);
    r11 = `>`(minlevel2, 0.0);
    c2 = `as.logical`(r11);
    if c2 then L28() else L5();
  D7():
    deopt 26 [r9];
  L5():
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L36() else L37();
  L7(dx6):
    st xx = dx6;
    writeLines = ldf writeLines;
    check L46() else D18();
  L25():
    as_numeric = ldf `as.numeric` in base;
    r10 = dyn as_numeric(r9);
    check L26() else D8();
  L28():
    x13 = ld x2;
    check L29() else D10();
  D8():
    deopt 28 [r10];
  D10():
    deopt 34 [x13];
  D18():
    deopt 56 [];
  L26():
    goto L4(r10);
  L29():
    x14 = force? x13;
    checkMissing(x14);
    c3 = `is.object`(x14);
    if c3 then L30() else L31(x14);
  L36():
    x17 = ld x1;
    check L38() else D13();
  L37():
    r14 = dyn base1(<sym x1>, <lang `[`(x2, `>=`(levs, minlevel))>);
    goto L7(r14);
  L46():
    p4 = prom<V +>{
      unique = ldf unique;
      p3 = prom<V +>{
        xx = ld xx;
        xx1 = force? xx;
        checkMissing(xx1);
        return xx1;
      };
      r19 = dyn unique(p3);
      return r19;
    };
    r21 = dyn writeLines(p4);
    check L47() else D19();
  D13():
    deopt 43 [x17];
  D19():
    deopt 58 [r21];
  L6(dx5):
    goto L7(dx5);
  L30():
    dr4 = tryDispatchBuiltin.1("[", x14);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L32() else L31(dr4);
  L31(x16):
    levs = ld levs;
    check L33() else D11();
  L38():
    x18 = force? x17;
    checkMissing(x18);
    x19 = ld x2;
    check L39() else D14();
  L47():
    sym2 = ldf invisible;
    base2 = ldf invisible in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L48() else L49();
  D11():
    deopt 36 [x16, levs];
  D14():
    deopt 45 [x19];
  L9(r23):
    popenv;
    return r23;
  L32():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L6(dx4);
  L33():
    levs1 = force? levs;
    checkMissing(levs1);
    minlevel3 = ld minlevel;
    check L34() else D12();
  L39():
    x20 = force? x19;
    checkMissing(x20);
    c4 = `is.object`(x20);
    if c4 then L40() else L41(x20);
  L48():
    x23 = ld x;
    check L50() else D20();
  L49():
    r22 = dyn base2(<sym x>);
    goto L9(r22);
  D12():
    deopt 37 [x16, levs1, minlevel3];
  D20():
    deopt 61 [x23];
  L8(dx8):
    c5 = ldf c in base;
    r17 = dyn c5(x18, dx8);
    check L45() else D17();
  L34():
    minlevel4 = force? minlevel3;
    checkMissing(minlevel4);
    r12 = `>=`(levs1, minlevel4);
    __2 = ldf `[` in base;
    r13 = dyn __2(x16, r12);
    goto L6(r13);
  L40():
    dr6 = tryDispatchBuiltin.1("[", x20);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L42() else L41(dr6);
  L41(x22):
    levs2 = ld levs;
    check L43() else D15();
  L50():
    x24 = force? x23;
    checkMissing(x24);
    invisible = ldf invisible in base;
    r24 = dyn invisible(x24);
    check L51() else D21();
  D15():
    deopt 47 [x22, levs2];
  D17():
    deopt 53 [r17];
  D21():
    deopt 64 [r24];
  L42():
    dx7 = getTryDispatchBuiltinValue(dr6);
    goto L8(dx7);
  L43():
    levs3 = force? levs2;
    checkMissing(levs3);
    minlevel5 = ld minlevel;
    check L44() else D16();
  L45():
    goto L7(r17);
  L51():
    goto L9(r24);
  D16():
    deopt 48 [x22, levs3, minlevel5];
  L44():
    minlevel6 = force? minlevel5;
    checkMissing(minlevel6);
    r15 = `>=`(levs3, minlevel6);
    __3 = ldf `[` in base;
    r16 = dyn __3(x22, r15);
    goto L8(r16);
  }
}