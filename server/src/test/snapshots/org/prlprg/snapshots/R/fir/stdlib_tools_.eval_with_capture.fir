fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3511605885;
    st `.eval_with_capture` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3511605885(expr, type) {
  (reg expr:*, reg type:*) -+> V { var expr:*, var type:*, reg type_isMissing:L, reg type_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg type1:*, reg type2:V, reg c:V, reg c1:L, reg match_arg:cls, reg type3:*, reg type4:V, reg p:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r4:V, reg r5:V, reg c2:cls, reg r6:V, reg p1:p(V +), reg r8:V, reg type5:*, reg type6:V, reg r9:V, reg capture_output:*, reg capture_output1:V, reg r10:V, reg file:cls, reg r11:V, reg file1:cls, reg r12:V, reg capture_output2:*, reg capture_output3:V, reg c3:L, reg sink:cls, reg outcon:*, reg outcon1:V, reg p2:p(V +), reg r14:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r15:V, reg r16:V, reg on_exit:cls, reg r17:V, reg capture_message:*, reg capture_message1:V, reg c4:L, reg sink1:cls, reg msgcon:*, reg msgcon1:V, reg p3:p(V +), reg r20:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r21:V, reg r22:V, reg on_exit1:cls, reg r23:V, reg sym4:cls, reg base4:cls, reg guard4:L, reg r25:V, reg on_exit2:cls, reg r27:V, reg eval:cls, reg expr1:*, reg expr2:V, reg p4:p(V +), reg r29:V, reg sym5:cls, reg base5:cls, reg guard5:L, reg r30:V, reg r31:V, reg value:*, reg value1:V, reg readLines:cls, reg outcon2:*, reg outcon3:V, reg p5:p(V +), reg r33:V, reg readLines1:cls, reg msgcon2:*, reg msgcon3:V, reg p6:p(V +), reg r35:V, reg list:cls, reg r36:V |
    mkenv;
    st expr = expr;
    type_isMissing = missing.0(type);
    if type_isMissing then L0(NULL) else L0(type);
  L0(type_orDefault):
    st type = type_orDefault;
    sym = ldf `is.null`;
    base = ldf `is.null` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L1(r1):
    c1 = `as.logical`(r1);
    if c1 then L15() else L2();
  L12():
    type1 = ld type;
    check L14() else D0();
  L13():
    r = dyn base(<sym type>);
    goto L1(r);
  D0():
    deopt 1 [type1];
  L2():
    match_arg = ldf `match.arg`;
    check L17() else D1();
  L3():
    file = ldf file;
    check L21() else D5();
  L14():
    type2 = force? type1;
    checkMissing(type2);
    c = `==`(type2, NULL);
    goto L1(c);
  L15():
    st capture_message = TRUE;
    st capture_output = TRUE;
    goto L3();
  D1():
    deopt 9 [];
  D5():
    deopt 24 [];
  L17():
    p = prom<V +>{
      type3 = ld type;
      type4 = force? type3;
      checkMissing(type4);
      return type4;
    };
    p1 = prom<V +>{
      sym1 = ldf c;
      base1 = ldf c in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r5):
      return r5;
    L1():
      c2 = ldf c in base;
      r6 = dyn c2("output", "message");
      goto L0(r6);
    L2():
      r4 = dyn base1("output", "message");
      goto L0(r4);
    };
    r8 = dyn match_arg(p, p1);
    check L18() else D2();
  L21():
    r11 = dyn file[open, encoding]("w+", "UTF-8");
    check L22() else D6();
  D2():
    deopt 12 [r8];
  D6():
    deopt 29 [r11];
  L18():
    st type = r8;
    type5 = ld type;
    check L19() else D3();
  L22():
    st outcon = r11;
    file1 = ldf file;
    check L23() else D7();
  D3():
    deopt 14 [type5];
  D7():
    deopt 32 [];
  L19():
    type6 = force? type5;
    checkMissing(type6);
    r9 = `==`(type6, "output");
    st capture_output = r9;
    capture_output = ld capture_output;
    check L20() else D4();
  L23():
    r12 = dyn file1[open, encoding]("w+", "UTF-8");
    check L24() else D8();
  D4():
    deopt 19 [capture_output];
  D8():
    deopt 37 [r12];
  L20():
    capture_output1 = force? capture_output;
    checkMissing(capture_output1);
    r10 = `!`(capture_output1);
    st capture_message = r10;
    goto L3();
  L24():
    st msgcon = r12;
    capture_output2 = ld capture_output;
    check L25() else D9();
  D9():
    deopt 39 [capture_output2];
  L25():
    capture_output3 = force? capture_output2;
    checkMissing(capture_output3);
    c3 = `as.logical`(capture_output3);
    if c3 then L26() else L4();
  L4():
    goto L6();
  L6():
    capture_message = ld capture_message;
    check L32() else D12();
  L26():
    sink = ldf sink;
    check L27() else D10();
  D10():
    deopt 42 [];
  D12():
    deopt 52 [capture_message];
  L27():
    p2 = prom<V +>{
      outcon = ld outcon;
      outcon1 = force? outcon;
      checkMissing(outcon1);
      return outcon1;
    };
    r14 = dyn sink[, type](p2, "output");
    check L28() else D11();
  L32():
    capture_message1 = force? capture_message;
    checkMissing(capture_message1);
    c4 = `as.logical`(capture_message1);
    if c4 then L33() else L7();
  D11():
    deopt 46 [r14];
  L7():
    goto L9();
  L9():
    sym4 = ldf `on.exit`;
    base4 = ldf `on.exit` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L39() else L40();
  L28():
    sym2 = ldf `on.exit`;
    base2 = ldf `on.exit` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L29() else L30();
  L33():
    sink1 = ldf sink;
    check L34() else D13();
  D13():
    deopt 55 [];
  L5(r16):
    goto L6();
  L10():
    eval = ldf eval;
    check L41() else D15();
  L29():
    on_exit = ldf `on.exit` in base;
    r17 = dyn on_exit(<lang sink(type="output")>);
    goto L5(r17);
  L30():
    r15 = dyn base2(<lang sink(type="output")>);
    goto L5(r15);
  L34():
    p3 = prom<V +>{
      msgcon = ld msgcon;
      msgcon1 = force? msgcon;
      checkMissing(msgcon1);
      return msgcon1;
    };
    r20 = dyn sink1[, type](p3, "message");
    check L35() else D14();
  L39():
    on_exit2 = ldf `on.exit` in base;
    r27 = dyn on_exit2(<lang {
      close(outcon);
      close(msgcon)
    }>, TRUE);
    goto L10();
  L40():
    r25 = dyn base4[, add](<lang {
      close(outcon);
      close(msgcon)
    }>, TRUE);
    goto L10();
  D14():
    deopt 59 [r20];
  D15():
    deopt 69 [];
  L35():
    sym3 = ldf `on.exit`;
    base3 = ldf `on.exit` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L36() else L37();
  L41():
    p4 = prom<V +>{
      expr1 = ld expr;
      expr2 = force? expr1;
      checkMissing(expr2);
      return expr2;
    };
    r29 = dyn eval(p4);
    check L42() else D16();
  D16():
    deopt 71 [r29];
  L8(r22):
    goto L9();
  L36():
    on_exit1 = ldf `on.exit` in base;
    r23 = dyn on_exit1(<lang sink(type="message")>, <sym capture_output>);
    goto L8(r23);
  L37():
    r21 = dyn base3[, add](<lang sink(type="message")>, <sym capture_output>);
    goto L8(r21);
  L42():
    st value = r29;
    sym5 = ldf list;
    base5 = ldf list in base;
    guard5 = `==`.4(sym5, base5);
    if guard5 then L43() else L44();
  L11(r31):
    popenv;
    return r31;
  L43():
    value = ld value;
    check L45() else D17();
  L44():
    r30 = dyn base5[value, output, message](<sym value>, <lang readLines(outcon, warn=FALSE)>, <lang readLines(msgcon, warn=FALSE)>);
    goto L11(r30);
  D17():
    deopt 75 [value];
  L45():
    value1 = force? value;
    checkMissing(value1);
    readLines = ldf readLines;
    check L46() else D18();
  D18():
    deopt 79 [];
  L46():
    p5 = prom<V +>{
      outcon2 = ld outcon;
      outcon3 = force? outcon2;
      checkMissing(outcon3);
      return outcon3;
    };
    r33 = dyn readLines[, warn](p5, FALSE);
    check L47() else D19();
  D19():
    deopt 83 [r33];
  L47():
    readLines1 = ldf readLines;
    check L48() else D20();
  D20():
    deopt 86 [];
  L48():
    p6 = prom<V +>{
      msgcon2 = ld msgcon;
      msgcon3 = force? msgcon2;
      checkMissing(msgcon3);
      return msgcon3;
    };
    r35 = dyn readLines1[, warn](p6, FALSE);
    check L49() else D21();
  D21():
    deopt 90 [r35];
  L49():
    list = ldf list in base;
    r36 = dyn list(value1, r33, r35);
    check L50() else D22();
  D22():
    deopt 93 [r36];
  L50():
    goto L11(r36);
  }
}