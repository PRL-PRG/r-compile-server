fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner4125524309;
    st `.try_quietly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner4125524309(expr) {
  (reg expr:*) -+> V { var expr:*, reg options:cls, reg r:V, reg sym:cls, reg base:cls, reg guard:L, reg r1:V, reg on_exit:cls, reg r3:V, reg file:cls, reg r4:V, reg sink:cls, reg outConn:*, reg outConn1:V, reg p:p(V +), reg r6:V, reg sink1:cls, reg outConn2:*, reg outConn3:V, reg p1:p(V +), reg r8:V, reg tryCatch:cls, reg withRestarts:cls, reg withCallingHandlers:cls, reg expr1:*, reg expr2:V, reg p2:p(V +), reg r10:cls, reg p3:p(V +), reg r12:V, reg p4:p(V +), reg r14:cls, reg p5:p(V +), reg r16:V, reg p6:p(V +), reg identity:*, reg identity1:V, reg p7:p(V +), reg sink2:cls, reg sink3:cls, reg close:cls, reg outConn4:*, reg outConn5:V, reg p8:p(V +), reg r22:V, reg p9:p(V +), reg r24:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r25:V, reg r26:V, reg yy:*, reg yy1:V, reg inherits:cls, reg r27:V, reg c:L, reg stop:cls, reg yy2:*, reg yy3:V, reg p10:p(V +), reg r29:V, reg yy4:*, reg yy5:V |
    mkenv;
    st expr = expr;
    options = ldf options;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn options[warn](1.0);
    check L5() else D1();
  D1():
    deopt 4 [r];
  L5():
    st oop = r;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L6() else L7();
  L0():
    file = ldf file;
    check L8() else D2();
  L6():
    on_exit = ldf `on.exit` in base;
    r3 = dyn on_exit(<lang options(oop)>);
    goto L0();
  L7():
    r1 = dyn base(<lang options(oop)>);
    goto L0();
  D2():
    deopt 10 [];
  L8():
    r4 = dyn file[open]("w+");
    check L9() else D3();
  D3():
    deopt 13 [r4];
  L9():
    st outConn = r4;
    sink = ldf sink;
    check L10() else D4();
  D4():
    deopt 16 [];
  L10():
    p = prom<V +>{
      outConn = ld outConn;
      outConn1 = force? outConn;
      checkMissing(outConn1);
      return outConn1;
    };
    r6 = dyn sink[, type](p, "output");
    check L11() else D5();
  D5():
    deopt 20 [r6];
  L11():
    sink1 = ldf sink;
    check L12() else D6();
  D6():
    deopt 22 [];
  L12():
    p1 = prom<V +>{
      outConn2 = ld outConn;
      outConn3 = force? outConn2;
      checkMissing(outConn3);
      return outConn3;
    };
    r8 = dyn sink1[, type](p1, "message");
    check L13() else D7();
  D7():
    deopt 26 [r8];
  L13():
    tryCatch = ldf tryCatch;
    check L14() else D8();
  D8():
    deopt 28 [];
  L14():
    p6 = prom<V +>{
      withRestarts = ldf withRestarts;
      p4 = prom<V +>{
        withCallingHandlers = ldf withCallingHandlers;
        p2 = prom<V +>{
          expr1 = ld expr;
          expr2 = force? expr1;
          checkMissing(expr2);
          return expr2;
        };
        p3 = prom<V +>{
          r10 = clos inner3708401697;
          return r10;
        };
        r12 = dyn withCallingHandlers[, error](p2, p3);
        return r12;
      };
      p5 = prom<V +>{
        r14 = clos inner2635467516;
        return r14;
      };
      r16 = dyn withRestarts[, grmbl](p4, p5);
      return r16;
    };
    p7 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    p9 = prom<V +>{
      sink2 = ldf sink;
      dyn sink2[type]("message");
      sink3 = ldf sink;
      dyn sink3[type]("output");
      close = ldf close;
      p8 = prom<V +>{
        outConn4 = ld outConn;
        outConn5 = force? outConn4;
        checkMissing(outConn5);
        return outConn5;
      };
      r22 = dyn close(p8);
      return r22;
    };
    r24 = dyn tryCatch[, error, finally](p6, p7, p9);
    check L15() else D9();
  D9():
    deopt 34 [r24];
  L15():
    st yy = r24;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L16() else L17();
  L1(r26):
    c = `as.logical`(r26);
    if c then L20() else L2();
  L16():
    yy = ld yy;
    check L18() else D10();
  L17():
    r25 = dyn base1(<sym yy>, "error");
    goto L1(r25);
  D10():
    deopt 38 [yy];
  L2():
    goto L3();
  L3():
    yy4 = ld yy;
    check L24() else D14();
  L18():
    yy1 = force? yy;
    checkMissing(yy1);
    inherits = ldf inherits in base;
    r27 = dyn inherits(yy1, "error", FALSE);
    check L19() else D11();
  L20():
    stop = ldf stop;
    check L21() else D12();
  D11():
    deopt 43 [r27];
  D12():
    deopt 45 [];
  D14():
    deopt 50 [yy4];
  L19():
    goto L1(r27);
  L21():
    p10 = prom<V +>{
      yy2 = ld yy;
      yy3 = force? yy2;
      checkMissing(yy3);
      return yy3;
    };
    r29 = dyn stop(p10);
    check L22() else D13();
  L24():
    yy5 = force? yy4;
    checkMissing(yy5);
    popenv;
    return yy5;
  D13():
    deopt 47 [r29];
  L22():
    goto L3();
  }
}
fun inner3708401697(e) {
  (reg e:*) -+> V { var e:*, reg invokeRestart:cls, reg e1:*, reg e2:V, reg p:p(V +), reg sys_calls:cls, reg r1:V, reg p1:p(V +), reg r3:V |
    mkenv;
    st e = e;
    invokeRestart = ldf invokeRestart;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p = prom<V +>{
      e1 = ld e;
      e2 = force? e1;
      checkMissing(e2);
      return e2;
    };
    p1 = prom<V +>{
      sys_calls = ldf `sys.calls`;
      r1 = dyn sys_calls();
      return r1;
    };
    r3 = dyn invokeRestart("grmbl", p, p1);
    check L1() else D1();
  D1():
    deopt 5 [r3];
  L1():
    popenv;
    return r3;
  }
}
fun inner2635467516(e, calls) {
  (reg e:*, reg calls:*) -+> V { var e:*, var calls:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg sys_calls:cls, reg r2:V, reg length:cls, reg r3:V, reg calls1:*, reg calls2:V, reg c:L, reg calls4:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg calls7:V, reg r5:V, reg n:*, reg n1:V, reg r6:V, reg seq_int:cls, reg r7:V, reg r8:V, reg __:cls, reg r9:V, reg rev:cls, reg calls8:*, reg calls9:V, reg p:p(V +), reg r11:V, reg c1:L, reg r13:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r16:V, reg r17:V, reg r18:V, reg c2:cls, reg r19:V, reg r20:V, reg __1:cls, reg r21:V, reg lapply:cls, reg calls10:*, reg calls11:V, reg p1:p(V +), reg deparse:*, reg deparse1:V, reg p2:p(V +), reg r24:V, reg stop:cls, reg conditionMessage:cls, reg e1:*, reg e2:V, reg p3:p(V +), reg r26:V, reg p4:p(V +), reg paste:cls, reg _eval_with_capture:cls, reg traceback:cls, reg tb:*, reg tb1:V, reg p5:p(V +), reg r29:V, reg p6:p(V +), reg r31:V, reg c3:L, reg r33:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r34:V, reg p7:p(V +), reg r36:V, reg p8:p(V +), reg r38:V |
    mkenv;
    st e = e;
    st calls = calls;
    sym = ldf length;
    base = ldf length in base;
    guard = `==`.4(sym, base);
    if guard then L5() else L6();
  L0(r1):
    st n = r1;
    calls1 = ld calls;
    check L10() else D3();
  L5():
    sys_calls = ldf `sys.calls`;
    check L7() else D0();
  L6():
    r = dyn base(<lang sys.calls()>);
    goto L0(r);
  D0():
    deopt 3 [];
  D3():
    deopt 8 [calls1];
  L7():
    r2 = dyn sys_calls();
    check L8() else D1();
  L10():
    calls2 = force? calls1;
    checkMissing(calls2);
    c = `is.object`(calls2);
    if c then L11() else L12(calls2);
  D1():
    deopt 4 [r2];
  L1(dx1):
    st calls = dx1;
    rev = ldf rev;
    check L18() else D6();
  L8():
    length = ldf length in base;
    r3 = dyn length(r2);
    check L9() else D2();
  L11():
    dr = tryDispatchBuiltin.1("[", calls2);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L13() else L12(dr);
  L12(calls4):
    sym1 = ldf `seq.int`;
    base1 = ldf `seq.int` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L14() else L15();
  D2():
    deopt 6 [r3];
  D6():
    deopt 23 [];
  L2(calls7, r5):
    r8 = `-`(<missing>, r5);
    __ = ldf `[` in base;
    r9 = dyn __(calls7, r8);
    goto L1(r9);
  L9():
    goto L0(r3);
  L13():
    dx = getTryDispatchBuiltinValue(dr);
    goto L1(dx);
  L14():
    n = ld n;
    check L16() else D4();
  L15():
    r4 = dyn base1[`length.out`](<lang `-`(n, 1)>);
    goto L2(calls4, r4);
  L18():
    p = prom<V +>{
      calls8 = ld calls;
      calls9 = force? calls8;
      checkMissing(calls9);
      return calls9;
    };
    r11 = dyn rev(p);
    check L19() else D7();
  D4():
    deopt 12 [calls4, n];
  D7():
    deopt 25 [r11];
  L16():
    n1 = force? n;
    checkMissing(n1);
    r6 = `-`(n1, 1);
    seq_int = ldf `seq.int` in base;
    r7 = dyn seq_int(r6);
    check L17() else D5();
  L19():
    c1 = `is.object`(r11);
    if c1 then L20() else L21(r11);
  D5():
    deopt 18 [calls4, r7];
  L3(dx3):
    st calls = dx3;
    lapply = ldf lapply;
    check L26() else D9();
  L17():
    goto L2(calls4, r7);
  L20():
    dr2 = tryDispatchBuiltin.1("[", r11);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L22() else L21(dr2);
  L21(r13):
    sym2 = ldf c;
    base2 = ldf c in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L23() else L24();
  D9():
    deopt 36 [];
  L4(r17, r18):
    r20 = `-`(<missing>, r18);
    __1 = ldf `[` in base;
    r21 = dyn __1(r17, r20);
    goto L3(r21);
  L22():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L3(dx2);
  L23():
    c2 = ldf c in base;
    r19 = dyn c2(1, 2);
    check L25() else D8();
  L24():
    r16 = dyn base2(1, 2);
    goto L4(r13, r16);
  L26():
    p1 = prom<V +>{
      calls10 = ld calls;
      calls11 = force? calls10;
      checkMissing(calls11);
      return calls11;
    };
    p2 = prom<V +>{
      deparse = ld deparse;
      deparse1 = force? deparse;
      checkMissing(deparse1);
      return deparse1;
    };
    r24 = dyn lapply(p1, p2);
    check L27() else D10();
  D8():
    deopt 31 [r13, r19];
  D10():
    deopt 39 [r24];
  L25():
    goto L4(r13, r19);
  L27():
    st tb = r24;
    stop = ldf stop;
    check L28() else D11();
  D11():
    deopt 42 [];
  L28():
    p4 = prom<V +>{
      conditionMessage = ldf conditionMessage;
      p3 = prom<V +>{
        e1 = ld e;
        e2 = force? e1;
        checkMissing(e2);
        return e2;
      };
      r26 = dyn conditionMessage(p3);
      return r26;
    };
    p8 = prom<V +>{
      paste = ldf paste;
      p7 = prom<V +>{
        _eval_with_capture = ldf `.eval_with_capture`;
        p6 = prom<V +>{
          traceback = ldf traceback;
          p5 = prom<V +>{
            tb = ld tb;
            tb1 = force? tb;
            checkMissing(tb1);
            return tb1;
          };
          r29 = dyn traceback(p5);
          return r29;
        };
        r31 = dyn _eval_with_capture(p6);
        c3 = `is.object`(r31);
        if c3 then L1() else L2(r31);
      L0(dx5):
        return dx5;
      L1():
        dr4 = tryDispatchBuiltin.1("$", r31);
        dc2 = getTryDispatchBuiltinDispatched(dr4);
        if dc2 then L3() else L2(dr4);
      L2(r33):
        r34 = `$`(r33, <sym output>);
        goto L0(r34);
      L3():
        dx4 = getTryDispatchBuiltinValue(dr4);
        goto L0(dx4);
      };
      r36 = dyn paste[, collapse](p7, "\n");
      return r36;
    };
    r38 = dyn stop[, , , `call.`](p4, "\nCall sequence:\n", p8, FALSE);
    check L29() else D12();
  D12():
    deopt 48 [r38];
  L29():
    popenv;
    return r38;
  }
}