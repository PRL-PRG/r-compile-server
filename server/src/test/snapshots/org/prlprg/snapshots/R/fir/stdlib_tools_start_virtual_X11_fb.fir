fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3855282202;
    st start_virtual_X11_fb = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3855282202(options) {
  (reg options:*) -+> V { var options:*, reg scan:cls, reg options1:*, reg options2:V, reg p:p(V +), reg character:cls, reg r1:V, reg p1:p(V +), reg r3:V, reg grepl:cls, reg args:*, reg args1:V, reg p2:p(V +), reg r5:V, reg sym:cls, reg base:cls, reg guard:L, reg r6:V, reg r7:V, reg ind:*, reg ind1:V, reg any:cls, reg r8:V, reg c:L, reg args2:*, reg args3:V, reg c1:L, reg args5:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg ind2:*, reg ind3:V, reg __:cls, reg r9:V, reg c2:L, reg dx3:V, reg dr2:V, reg dc1:L, reg dx4:V, reg dx5:V, reg __1:cls, reg r10:V, reg paste0:cls, reg Sys_getpid:cls, reg r11:V, reg p3:p(V +), reg r13:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg num:*, reg num1:V, reg options3:*, reg options4:V, reg c3:cls, reg r16:V, reg Sys_getenv:cls, reg r17:V, reg tempfile:cls, reg r18:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r19:V, reg on_exit:cls, reg r21:V, reg writeLines:cls, reg sym3:cls, reg base3:cls, reg guard3:L, reg r22:V, reg r23:V, reg paste1:cls, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg r25:V, reg shQuote:cls, reg r26:V, reg options5:*, reg options6:V, reg c4:cls, reg r27:V, reg p4:p(V +), reg r29:V, reg c5:cls, reg r30:V, reg p5:p(V +), reg tf:*, reg tf1:V, reg p6:p(V +), reg r33:V, reg system2:cls, reg tf2:*, reg tf3:V, reg p7:p(V +), reg r35:V, reg Sys_setenv:cls, reg num2:*, reg num3:V, reg p8:p(V +), reg r37:V, reg dis:*, reg dis1:V, reg l:*, reg attr__:cls, reg r38:V, reg pid:*, reg pid1:V |
    mkenv;
    st options = options;
    scan = ldf scan;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p = prom<V +>{
      options1 = ld options;
      options2 = force? options1;
      checkMissing(options2);
      return options2;
    };
    p1 = prom<V +>{
      character = ldf character;
      r1 = dyn character();
      return r1;
    };
    r3 = dyn scan[text, what, quiet](p, p1, TRUE);
    check L8() else D1();
  D1():
    deopt 8 [r3];
  L8():
    st args = r3;
    grepl = ldf grepl;
    check L9() else D2();
  D2():
    deopt 11 [];
  L9():
    p2 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r5 = dyn grepl("^:[[:digit:]]+$", p2);
    check L10() else D3();
  D3():
    deopt 14 [r5];
  L10():
    st ind = r5;
    sym = ldf any;
    base = ldf any in base;
    guard = `==`.4(sym, base);
    if guard then L11() else L12();
  L0(r7):
    c = `as.logical`(r7);
    if c then L15() else L1();
  L11():
    ind = ld ind;
    check L13() else D4();
  L12():
    r6 = dyn base(<sym ind>);
    goto L0(r6);
  D4():
    deopt 18 [ind];
  L1():
    paste0 = ldf paste0;
    check L25() else D8();
  L4():
    Sys_getenv = ldf `Sys.getenv`;
    check L32() else D13();
  L13():
    ind1 = force? ind;
    checkMissing(ind1);
    any = ldf any in base;
    r8 = dyn any(ind1);
    check L14() else D5();
  L15():
    args2 = ld args;
    check L16() else D6();
  D5():
    deopt 21 [r8];
  D6():
    deopt 22 [args2];
  D8():
    deopt 32 [];
  D13():
    deopt 47 [];
  L14():
    goto L0(r8);
  L16():
    args3 = force? args2;
    checkMissing(args3);
    c1 = `is.object`(args3);
    if c1 then L17() else L18(args3);
  L25():
    p3 = prom<V +>{
      Sys_getpid = ldf `Sys.getpid`;
      r11 = dyn Sys_getpid();
      return r11;
    };
    r13 = dyn paste0(":", p3);
    check L26() else D9();
  L32():
    r17 = dyn Sys_getenv[, unset]("DISPLAY", NA_STR);
    check L33() else D14();
  D9():
    deopt 35 [r13];
  D14():
    deopt 51 [r17];
  L2(dx1):
    c2 = `is.object`(dx1);
    if c2 then L21() else L22(dx1);
  L17():
    dr = tryDispatchBuiltin.1("[", args3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L19() else L18(dr);
  L18(args5):
    ind2 = ld ind;
    check L20() else D7();
  L26():
    st num = r13;
    sym1 = ldf c;
    base1 = ldf c in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L27() else L28();
  L33():
    st dis = r17;
    tempfile = ldf tempfile;
    check L34() else D15();
  D7():
    deopt 24 [args5, ind2];
  D15():
    deopt 54 [];
  L3(dx5):
    st num = dx5;
    goto L4();
  L5(r15):
    st options = r15;
    goto L4();
  L19():
    dx = getTryDispatchBuiltinValue(dr);
    goto L2(dx);
  L20():
    ind3 = force? ind2;
    __ = ldf `[` in base;
    r9 = dyn __(args5, ind3);
    goto L2(r9);
  L21():
    dr2 = tryDispatchBuiltin.1("[", dx1);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L23() else L22(dr2);
  L22(dx3):
    __1 = ldf `[` in base;
    r10 = dyn __1(dx3, 1);
    goto L3(r10);
  L27():
    num = ld num;
    check L29() else D10();
  L28():
    r14 = dyn base1(<sym num>, <sym options>);
    goto L5(r14);
  L34():
    r18 = dyn tempfile();
    check L35() else D16();
  D10():
    deopt 39 [num];
  D16():
    deopt 55 [r18];
  L23():
    dx4 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx4);
  L29():
    num1 = force? num;
    checkMissing(num1);
    options3 = ld options;
    check L30() else D11();
  L35():
    st tf = r18;
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L36() else L37();
  D11():
    deopt 41 [options3];
  L6():
    writeLines = ldf writeLines;
    check L38() else D17();
  L30():
    options4 = force? options3;
    checkMissing(options4);
    c3 = ldf c in base;
    r16 = dyn c3(num1, options4);
    check L31() else D12();
  L36():
    on_exit = ldf `on.exit` in base;
    r21 = dyn on_exit(<lang unlink(tf)>);
    goto L6();
  L37():
    r19 = dyn base2(<lang unlink(tf)>);
    goto L6();
  D12():
    deopt 44 [r16];
  D17():
    deopt 61 [];
  L31():
    goto L5(r16);
  L38():
    p5 = prom<V +>{
      sym3 = ldf c;
      base3 = ldf c in base;
      guard3 = `==`.4(sym3, base3);
      if guard3 then L1() else L2();
    L0(r23):
      return r23;
    L1():
      paste1 = ldf paste;
      p4 = prom<V +>{
        sym4 = ldf c;
        base4 = ldf c in base;
        guard4 = `==`.4(sym4, base4);
        if guard4 then L1() else L2();
      L0(r25):
        return r25;
      L1():
        shQuote = ldf shQuote;
        r26 = dyn shQuote("Xvfb");
        options5 = ld options;
        options6 = force? options5;
        checkMissing(options6);
        c4 = ldf c in base;
        r27 = dyn c4(r26, options6, ">/dev/null 2>&1 &");
        goto L0(r27);
      L2():
        r24 = dyn base4(<lang shQuote("Xvfb")>, <sym options>, ">/dev/null 2>&1 &");
        goto L0(r24);
      };
      r29 = dyn paste1[, collapse](p4, " ");
      c5 = ldf c in base;
      r30 = dyn c5(r29, "echo ${!}");
      goto L0(r30);
    L2():
      r22 = dyn base3(<lang paste(c(shQuote("Xvfb"), options, ">/dev/null 2>&1 &"), collapse=" ")>, "echo ${!}");
      goto L0(r22);
    };
    p6 = prom<V +>{
      tf = ld tf;
      tf1 = force? tf;
      checkMissing(tf1);
      return tf1;
    };
    r33 = dyn writeLines(p5, p6);
    check L39() else D18();
  D18():
    deopt 64 [r33];
  L39():
    system2 = ldf system2;
    check L40() else D19();
  D19():
    deopt 66 [];
  L40():
    p7 = prom<V +>{
      tf2 = ld tf;
      tf3 = force? tf2;
      checkMissing(tf3);
      return tf3;
    };
    r35 = dyn system2[, , stdout]("sh", p7, TRUE);
    check L41() else D20();
  D20():
    deopt 71 [r35];
  L41():
    st pid = r35;
    Sys_setenv = ldf `Sys.setenv`;
    check L42() else D21();
  D21():
    deopt 74 [];
  L42():
    p8 = prom<V +>{
      num2 = ld num;
      num3 = force? num2;
      checkMissing(num3);
      return num3;
    };
    r37 = dyn Sys_setenv[DISPLAY](p8);
    check L43() else D22();
  D22():
    deopt 77 [r37];
  L43():
    dis = ld dis;
    check L44() else D23();
  D23():
    deopt 78 [dis];
  L44():
    dis1 = force? dis;
    checkMissing(dis1);
    l = ld pid;
    attr__ = ldf `attr<-`;
    check L45() else D24();
  D24():
    deopt 81 [dis1, l, dis1];
  L45():
    r38 = dyn attr__(l, NULL, "display", dis1);
    check L46() else D25();
  D25():
    deopt 84 [dis1, r38];
  L46():
    st pid = r38;
    pid = ld pid;
    check L47() else D26();
  D26():
    deopt 86 [pid];
  L47():
    pid1 = force? pid;
    checkMissing(pid1);
    popenv;
    return pid1;
  }
}