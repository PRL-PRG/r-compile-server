fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1208882656;
    st `system.time` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1208882656(expr, gcFirst) {
  (reg expr:*, reg gcFirst:*) -+> V { var expr:*, var gcFirst:*, reg gcFirst_isMissing:L, reg gcFirst_orDefault:*, reg r:cls, reg gcFirst1:*, reg gcFirst2:V, reg c:L, reg gc:cls, reg r1:V, reg sym:cls, reg base:cls, reg guard:L, reg r3:V, reg r4:V, reg proc_time:cls, reg r5:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r6:V, reg on_exit:cls, reg r8:V, reg expr1:*, reg expr2:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg proc_time1:cls, reg r11:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r12:V, reg on_exit1:cls, reg r14:V, reg structure:cls, reg new_time:*, reg new_time1:V, reg time:*, reg time1:V, reg r15:V, reg p:p(V +), reg r17:V |
    mkenv;
    st expr = expr;
    gcFirst_isMissing = missing.0(gcFirst);
    if gcFirst_isMissing then L0(TRUE) else L0(gcFirst);
  L0(gcFirst_orDefault):
    st gcFirst = gcFirst_orDefault;
    r = clos inner177517877;
    st ppt = r;
    gcFirst1 = ld gcFirst;
    check L7() else D0();
  D0():
    deopt 3 [gcFirst1];
  L7():
    gcFirst2 = force? gcFirst1;
    checkMissing(gcFirst2);
    c = `as.logical`(gcFirst2);
    if c then L8() else L1();
  L1():
    goto L2();
  L2():
    sym = ldf `proc.time`;
    base = ldf `proc.time` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L8():
    gc = ldf gc;
    check L9() else D1();
  D1():
    deopt 6 [];
  L3(r4):
    st time = r4;
    sym1 = ldf `on.exit`;
    base1 = ldf `on.exit` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L15() else L16();
  L9():
    r1 = dyn gc(FALSE);
    check L10() else D2();
  L12():
    proc_time = ldf `proc.time` in base;
    r5 = dyn proc_time();
    check L14() else D3();
  L13():
    r3 = dyn base();
    goto L3(r3);
  D2():
    deopt 8 [r1];
  D3():
    deopt 14 [r5];
  L4():
    expr1 = ld expr;
    check L17() else D4();
  L10():
    goto L2();
  L14():
    goto L3(r5);
  L15():
    on_exit = ldf `on.exit` in base;
    r8 = dyn on_exit(<lang message("Timing stopped at: ", ppt(`-`(proc.time(), time)))>);
    goto L4();
  L16():
    r6 = dyn base1(<lang message("Timing stopped at: ", ppt(`-`(proc.time(), time)))>);
    goto L4();
  D4():
    deopt 19 [expr1];
  L17():
    expr2 = force? expr1;
    checkMissing(expr2);
    sym2 = ldf `proc.time`;
    base2 = ldf `proc.time` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L5(r10):
    st `new.time` = r10;
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L21() else L22();
  L18():
    proc_time1 = ldf `proc.time` in base;
    r11 = dyn proc_time1();
    check L20() else D5();
  L19():
    r9 = dyn base2();
    goto L5(r9);
  D5():
    deopt 24 [r11];
  L6():
    structure = ldf structure;
    check L23() else D6();
  L20():
    goto L5(r11);
  L21():
    on_exit1 = ldf `on.exit` in base;
    r14 = dyn on_exit1();
    goto L6();
  L22():
    r12 = dyn base3();
    goto L6();
  D6():
    deopt 30 [];
  L23():
    p = prom<V +>{
      new_time = ld `new.time`;
      new_time1 = force? new_time;
      checkMissing(new_time1);
      time = ld time;
      time1 = force? time;
      checkMissing(time1);
      r15 = `-`(new_time1, time1);
      return r15;
    };
    r17 = dyn structure[, class](p, "proc_time");
    check L24() else D7();
  D7():
    deopt 34 [r17];
  L24():
    popenv;
    return r17;
  }
}
fun inner177517877(y) {
  (reg y:*) -+> V { var y:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg y1:*, reg y2:V, reg c:L, reg y4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg __:cls, reg r2:V, reg is_na:cls, reg r3:V, reg r4:V, reg c1:L, reg y5:*, reg y6:V, reg c2:L, reg y8:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg __1:cls, reg r5:V, reg y9:*, reg y10:V, reg c3:L, reg dx5:V, reg y12:V, reg dr4:V, reg dc2:L, reg dx7:V, reg dx8:V, reg dx9:V, reg __2:cls, reg r6:V, reg r7:V, reg l:*, reg c4:L, reg r9:V, reg l2:*, reg dr6:V, reg dc3:L, reg dx10:V, reg r11:V, reg dx11:V, reg ___:cls, reg r12:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg y13:*, reg y14:V, reg c5:L, reg y16:V, reg dr8:V, reg dc4:L, reg dx12:V, reg dx13:V, reg __3:cls, reg r16:V, reg is_na1:cls, reg r17:V, reg r18:V, reg c6:L, reg y17:*, reg y18:V, reg c7:L, reg y20:V, reg dr10:V, reg dc5:L, reg dx14:V, reg dx15:V, reg __4:cls, reg r19:V, reg y21:*, reg y22:V, reg c8:L, reg dx17:V, reg y24:V, reg dr12:V, reg dc6:L, reg dx19:V, reg dx20:V, reg dx21:V, reg __5:cls, reg r20:V, reg r21:V, reg l3:*, reg c9:L, reg r23:V, reg l5:*, reg dr14:V, reg dc7:L, reg dx22:V, reg r25:V, reg dx23:V, reg ___1:cls, reg r26:V, reg paste:cls, reg formatC:cls, reg y25:*, reg y26:V, reg c10:L, reg y28:V, reg dr16:V, reg dc8:L, reg dx24:V, reg dx25:V, reg __6:cls, reg r28:V, reg p:p(V +), reg r30:V, reg p1:p(V +), reg r32:V |
    mkenv;
    st y = y;
    sym = ldf `is.na`;
    base = ldf `is.na` in base;
    guard = `==`.4(sym, base);
    if guard then L14() else L15();
  L0(r1):
    r4 = `!`(r1);
    c1 = `as.logical`(r4);
    if c1 then L21() else L2();
  L14():
    y1 = ld y;
    check L16() else D0();
  L15():
    r = dyn base(<lang `[`(y, 4)>);
    goto L0(r);
  D0():
    deopt 2 [y1];
  L2():
    goto L6();
  L6():
    sym1 = ldf `is.na`;
    base1 = ldf `is.na` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L34() else L35();
  L16():
    y2 = force? y1;
    checkMissing(y2);
    c = `is.object`(y2);
    if c then L17() else L18(y2);
  L21():
    y5 = ld y;
    check L22() else D2();
  D2():
    deopt 10 [y5];
  L1(dx1):
    is_na = ldf `is.na` in base;
    r3 = dyn is_na(dx1);
    check L20() else D1();
  L7(r15):
    r18 = `!`(r15);
    c6 = `as.logical`(r18);
    if c6 then L41() else L9();
  L17():
    dr = tryDispatchBuiltin.1("[", y2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(y4):
    __ = ldf `[` in base;
    r2 = dyn __(y4, 4);
    goto L1(r2);
  L22():
    y6 = force? y5;
    checkMissing(y6);
    c2 = `is.object`(y6);
    if c2 then L23() else L24(y6);
  L34():
    y13 = ld y;
    check L36() else D4();
  L35():
    r14 = dyn base1(<lang `[`(y, 5)>);
    goto L7(r14);
  D1():
    deopt 8 [r3];
  D4():
    deopt 29 [y13];
  L3(dx3):
    y9 = ld y;
    check L26() else D3();
  L9():
    goto L13();
  L13():
    paste = ldf paste;
    check L54() else D8();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L20():
    goto L0(r3);
  L23():
    dr2 = tryDispatchBuiltin.1("[", y6);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L25() else L24(dr2);
  L24(y8):
    __1 = ldf `[` in base;
    r5 = dyn __1(y8, 1);
    goto L3(r5);
  L36():
    y14 = force? y13;
    checkMissing(y14);
    c5 = `is.object`(y14);
    if c5 then L37() else L38(y14);
  L41():
    y17 = ld y;
    check L42() else D6();
  D3():
    deopt 14 [dx3, y9];
  D6():
    deopt 37 [y17];
  D8():
    deopt 55 [];
  L8(dx13):
    is_na1 = ldf `is.na` in base;
    r17 = dyn is_na1(dx13);
    check L40() else D5();
  L25():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L26():
    y10 = force? y9;
    checkMissing(y10);
    c3 = `is.object`(y10);
    if c3 then L27() else L28(dx3, y10);
  L37():
    dr8 = tryDispatchBuiltin.1("[", y14);
    dc4 = getTryDispatchBuiltinDispatched(dr8);
    if dc4 then L39() else L38(dr8);
  L38(y16):
    __3 = ldf `[` in base;
    r16 = dyn __3(y16, 5);
    goto L8(r16);
  L42():
    y18 = force? y17;
    checkMissing(y18);
    c7 = `is.object`(y18);
    if c7 then L43() else L44(y18);
  L54():
    p1 = prom<V +>{
      formatC = ldf formatC;
      p = prom<V +>{
        y25 = ld y;
        y26 = force? y25;
        checkMissing(y26);
        c10 = `is.object`(y26);
        if c10 then L1() else L2(y26);
      L0(dx25):
        return dx25;
      L1():
        dr16 = tryDispatchBuiltin.1("[", y26);
        dc8 = getTryDispatchBuiltinDispatched(dr16);
        if dc8 then L3() else L2(dr16);
      L2(y28):
        __6 = ldf `[` in base;
        r28 = dyn __6(y28, <int 1, 2, 3>);
        goto L0(r28);
      L3():
        dx24 = getTryDispatchBuiltinValue(dr16);
        goto L0(dx24);
      };
      r30 = dyn formatC(p);
      return r30;
    };
    r32 = dyn paste[, collapse](p1, " ");
    check L55() else D9();
  D5():
    deopt 35 [r17];
  D9():
    deopt 59 [r32];
  L4(dx8, dx9):
    r7 = `+`(dx8, dx9);
    l = ld y;
    c4 = `is.object`(l);
    if c4 then L30() else L31(r7, l);
  L10(dx15):
    y21 = ld y;
    check L46() else D7();
  L27():
    dr4 = tryDispatchBuiltin.1("[", y10);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L29() else L28(dx3, dr4);
  L28(dx5, y12):
    __2 = ldf `[` in base;
    r6 = dyn __2(y12, 4);
    goto L4(dx5, r6);
  L39():
    dx12 = getTryDispatchBuiltinValue(dr8);
    goto L8(dx12);
  L40():
    goto L7(r17);
  L43():
    dr10 = tryDispatchBuiltin.1("[", y18);
    dc5 = getTryDispatchBuiltinDispatched(dr10);
    if dc5 then L45() else L44(dr10);
  L44(y20):
    __4 = ldf `[` in base;
    r19 = dyn __4(y20, 2);
    goto L10(r19);
  L55():
    popenv;
    return r32;
  D7():
    deopt 41 [dx15, y21];
  L5(r11, dx11):
    st y = dx11;
    goto L6();
  L29():
    dx7 = getTryDispatchBuiltinValue(dr4);
    goto L4(dx3, dx7);
  L30():
    dr6 = tryDispatchBuiltin.0("[<-", l, r7);
    dc3 = getTryDispatchBuiltinDispatched(dr6);
    if dc3 then L32() else L31(r7, dr6);
  L31(r9, l2):
    ___ = ldf `[<-` in base;
    r12 = dyn ___(l2, r7, 1);
    goto L5(r9, r12);
  L45():
    dx14 = getTryDispatchBuiltinValue(dr10);
    goto L10(dx14);
  L46():
    y22 = force? y21;
    checkMissing(y22);
    c8 = `is.object`(y22);
    if c8 then L47() else L48(dx15, y22);
  L11(dx20, dx21):
    r21 = `+`(dx20, dx21);
    l3 = ld y;
    c9 = `is.object`(l3);
    if c9 then L50() else L51(r21, l3);
  L32():
    dx10 = getTryDispatchBuiltinValue(dr6);
    goto L5(r7, dx10);
  L47():
    dr12 = tryDispatchBuiltin.1("[", y22);
    dc6 = getTryDispatchBuiltinDispatched(dr12);
    if dc6 then L49() else L48(dx15, dr12);
  L48(dx17, y24):
    __5 = ldf `[` in base;
    r20 = dyn __5(y24, 5);
    goto L11(dx17, r20);
  L12(r25, dx23):
    st y = dx23;
    goto L13();
  L49():
    dx19 = getTryDispatchBuiltinValue(dr12);
    goto L11(dx15, dx19);
  L50():
    dr14 = tryDispatchBuiltin.0("[<-", l3, r21);
    dc7 = getTryDispatchBuiltinDispatched(dr14);
    if dc7 then L52() else L51(r21, dr14);
  L51(r23, l5):
    ___1 = ldf `[<-` in base;
    r26 = dyn ___1(l5, r21, 2);
    goto L12(r23, r26);
  L52():
    dx22 = getTryDispatchBuiltinValue(dr14);
    goto L12(r21, dx22);
  }
}