fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3006846853;
    st tidy_validate_R_httpd_path = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3006846853(path) {
  (reg path:*) -+> V { var path:*, reg tryCatch:cls, reg httpd:cls, reg path1:*, reg path2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg identity:*, reg identity1:V, reg p2:p(V +), reg r4:V, reg sym:cls, reg base:cls, reg guard:L, reg r5:V, reg r6:V, reg y:*, reg y1:V, reg inherits:cls, reg r7:V, reg c:L, reg y2:*, reg y3:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r10:V, reg r11:V, reg y4:*, reg y5:V, reg c1:L, reg y7:V, reg dr:V, reg dc:L, reg dx:V, reg dx1:V, reg r12:V, reg c2:V, reg r13:V, reg c3:L, reg sym2:cls, reg base2:cls, reg guard2:L, reg r14:V, reg r15:V, reg y8:*, reg y9:V, reg c4:L, reg y11:V, reg dr2:V, reg dc1:L, reg dx2:V, reg dx3:V, reg r16:V, reg c5:V, reg c6:L, reg tidy_validate:cls, reg f:*, reg f1:V, reg p3:p(V +), reg r18:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r19:V, reg r20:V, reg y12:*, reg y13:V, reg c7:L, reg y15:V, reg dr4:V, reg dc2:L, reg dx4:V, reg dx5:V, reg r21:V, reg c8:V, reg r22:V, reg c9:L, reg tempfile:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r24:V, reg on_exit:cls, reg r26:V, reg writeLines:cls, reg payload:*, reg payload1:V, reg p4:p(V +), reg f2:*, reg f3:V, reg p5:p(V +), reg r29:V, reg tidy_validate1:cls, reg f4:*, reg f5:V, reg p6:p(V +), reg r31:V |
    mkenv;
    st path = path;
    tryCatch = ldf tryCatch;
    check L10() else D0();
  D0():
    deopt 1 [];
  L10():
    p1 = prom<V +>{
      httpd = ldf httpd;
      p = prom<V +>{
        path1 = ld path;
        path2 = force? path1;
        checkMissing(path2);
        return path2;
      };
      r1 = dyn httpd[, query](p, NULL);
      return r1;
    };
    p2 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r4 = dyn tryCatch[, error](p1, p2);
    check L11() else D1();
  D1():
    deopt 5 [r4];
  L11():
    st y = r4;
    sym = ldf inherits;
    base = ldf inherits in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L0(r6):
    c = `as.logical`(r6);
    if c then L16() else L1();
  L12():
    y = ld y;
    check L14() else D2();
  L13():
    r5 = dyn base(<sym y>, "error");
    goto L0(r5);
  D2():
    deopt 9 [y];
  L1():
    sym1 = ldf `is.null`;
    base1 = ldf `is.null` in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L20() else L21();
  L14():
    y1 = force? y;
    checkMissing(y1);
    inherits = ldf inherits in base;
    r7 = dyn inherits(y1, "error", FALSE);
    check L15() else D3();
  L16():
    y2 = ld y;
    check L17() else D4();
  D3():
    deopt 14 [r7];
  D4():
    deopt 15 [y2];
  L3(r11):
    r13 = `!`(r11);
    c3 = `as.logical`(r13);
    if c3 then L27() else L4();
  L15():
    goto L0(r7);
  L17():
    y3 = force? y2;
    checkMissing(y3);
    popenv;
    return y3;
  L20():
    y4 = ld y;
    check L22() else D5();
  L21():
    r10 = dyn base1(<lang `<-`(f, `$`(y, file))>);
    goto L3(r10);
  D5():
    deopt 21 [y4];
  L4():
    sym3 = ldf `is.null`;
    base3 = ldf `is.null` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L40() else L41();
  L22():
    y5 = force? y4;
    checkMissing(y5);
    c1 = `is.object`(y5);
    if c1 then L24() else L25(y5);
  L27():
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L28() else L29();
  L5(r15):
    c6 = `as.logical`(r15);
    if c6 then L35() else L6();
  L7(r20):
    r22 = `!`(r20);
    c9 = `as.logical`(r22);
    if c9 then L47() else L8();
  L23(dx1):
    st f = dx1;
    c2 = `==`(dx1, NULL);
    goto L3(c2);
  L24():
    dr = tryDispatchBuiltin.1("$", y5);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L26() else L25(dr);
  L25(y7):
    r12 = `$`(y7, <sym file>);
    goto L23(r12);
  L28():
    y8 = ld y;
    check L30() else D6();
  L29():
    r14 = dyn base2(<lang `$`(y, "content-type")>);
    goto L5(r14);
  L40():
    y12 = ld y;
    check L42() else D9();
  L41():
    r19 = dyn base3(<lang `<-`(payload, `$`(y, payload))>);
    goto L7(r19);
  D6():
    deopt 28 [y8];
  D9():
    deopt 39 [y12];
  L6():
    popenv;
    return NULL;
  L8():
    popenv;
    return NULL;
  L26():
    dx = getTryDispatchBuiltinValue(dr);
    goto L23(dx);
  L30():
    y9 = force? y8;
    checkMissing(y9);
    c4 = `is.object`(y9);
    if c4 then L32() else L33(y9);
  L35():
    tidy_validate = ldf tidy_validate;
    check L36() else D7();
  L42():
    y13 = force? y12;
    checkMissing(y13);
    c7 = `is.object`(y13);
    if c7 then L44() else L45(y13);
  L47():
    tempfile = ldf tempfile;
    check L48() else D10();
  D7():
    deopt 33 [];
  D10():
    deopt 46 [];
  L31(dx3):
    c5 = `==`(dx3, NULL);
    goto L5(c5);
  L32():
    dr2 = tryDispatchBuiltin.1("$", y9);
    dc1 = getTryDispatchBuiltinDispatched(dr2);
    if dc1 then L34() else L33(dr2);
  L33(y11):
    r16 = `$`(y11, <sym `content-type`>);
    goto L31(r16);
  L36():
    p3 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    r18 = dyn tidy_validate(p3);
    check L37() else D8();
  L43(dx5):
    st payload = dx5;
    c8 = `==`(dx5, NULL);
    goto L7(c8);
  L44():
    dr4 = tryDispatchBuiltin.1("$", y13);
    dc2 = getTryDispatchBuiltinDispatched(dr4);
    if dc2 then L46() else L45(dr4);
  L45(y15):
    r21 = `$`(y15, <sym payload>);
    goto L43(r21);
  L48():
    r23 = dyn tempfile();
    check L49() else D11();
  D8():
    deopt 35 [r18];
  D11():
    deopt 47 [r23];
  L34():
    dx2 = getTryDispatchBuiltinValue(dr2);
    goto L31(dx2);
  L37():
    popenv;
    return r18;
  L46():
    dx4 = getTryDispatchBuiltinValue(dr4);
    goto L43(dx4);
  L49():
    st f = r23;
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L50() else L51();
  L9():
    writeLines = ldf writeLines;
    check L52() else D12();
  L50():
    on_exit = ldf `on.exit` in base;
    r26 = dyn on_exit(<lang unlink(f)>);
    goto L9();
  L51():
    r24 = dyn base4(<lang unlink(f)>);
    goto L9();
  D12():
    deopt 53 [];
  L52():
    p4 = prom<V +>{
      payload = ld payload;
      payload1 = force? payload;
      checkMissing(payload1);
      return payload1;
    };
    p5 = prom<V +>{
      f2 = ld f;
      f3 = force? f2;
      checkMissing(f3);
      return f3;
    };
    r29 = dyn writeLines(p4, p5);
    check L53() else D13();
  D13():
    deopt 56 [r29];
  L53():
    tidy_validate1 = ldf tidy_validate;
    check L54() else D14();
  D14():
    deopt 58 [];
  L54():
    p6 = prom<V +>{
      f4 = ld f;
      f5 = force? f4;
      checkMissing(f5);
      return f5;
    };
    r31 = dyn tidy_validate1(p6);
    check L55() else D15();
  D15():
    deopt 60 [r31];
  L55():
    popenv;
    return r31;
  }
}