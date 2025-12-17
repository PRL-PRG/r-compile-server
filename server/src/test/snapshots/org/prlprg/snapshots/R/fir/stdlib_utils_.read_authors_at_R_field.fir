fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2501545716;
    st `.read_authors_at_R_field` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2501545716(x) {
  (reg x:*) -+> V { var x:*, reg Encoding:cls, reg x1:*, reg x2:V, reg p:p(V +), reg r1:V, reg r2:V, reg c:L, reg c2:V, reg l10n_info:cls, reg r3:V, reg c3:L, reg c5:L, reg r5:V, reg dr:V, reg dc:L, reg dx:V, reg c7:L, reg dx1:V, reg r6:V, reg r7:V, reg c8:L, reg c9:V, reg c11:L, reg file:cls, reg r8:V, reg sym:cls, reg base:cls, reg guard:L, reg r9:V, reg on_exit:cls, reg r11:V, reg writeLines:cls, reg x3:*, reg x4:V, reg p1:p(V +), reg con:*, reg con1:V, reg p2:p(V +), reg r14:V, reg eval:cls, reg parse:cls, reg con2:*, reg con3:V, reg p3:p(V +), reg r16:V, reg p4:p(V +), reg r18:V, reg r19:V, reg eval1:cls, reg str2expression:cls, reg x5:*, reg x6:V, reg p5:p(V +), reg r21:V, reg p6:p(V +), reg r23:V, reg sym1:cls, reg base1:cls, reg guard1:L, reg r24:V, reg r25:V, reg out:*, reg out1:V, reg inherits:cls, reg r26:V, reg r27:V, reg c12:L, reg do_call:cls, reg c13:*, reg c14:V, reg p7:p(V +), reg lapply:cls, reg x7:*, reg x8:V, reg p8:p(V +), reg as_person:*, reg as_person1:V, reg p9:p(V +), reg r31:V, reg p10:p(V +), reg r33:V, reg out2:*, reg out3:V |
    mkenv;
    st x = x;
    Encoding = ldf Encoding;
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
    r1 = dyn Encoding(p);
    check L8() else D1();
  D1():
    deopt 3 [r1];
  L8():
    r2 = `==`(r1, "UTF-8");
    c = `as.logical`(r2);
    if c then L9() else L0(c);
  L0(c2):
    c11 = `as.logical`(c2);
    if c11 then L17() else L1();
  L9():
    l10n_info = ldf l10n_info;
    check L10() else D2();
  D2():
    deopt 7 [c];
  L1():
    eval1 = ldf eval;
    check L27() else D10();
  L3(r19):
    st out = r19;
    sym1 = ldf inherits;
    base1 = ldf inherits in base;
    guard1 = `==`.4(sym1, base1);
    if guard1 then L29() else L30();
  L10():
    r3 = dyn l10n_info();
    check L11() else D3();
  L17():
    file = ldf file;
    check L18() else D4();
  D3():
    deopt 8 [c, r3];
  D4():
    deopt 13 [];
  D10():
    deopt 31 [];
  L4(r25):
    r27 = `!`(r25);
    c12 = `as.logical`(r27);
    if c12 then L33() else L5();
  L11():
    c3 = `is.object`(r3);
    if c3 then L13() else L14(c, r3);
  L18():
    r8 = dyn file();
    check L19() else D5();
  L27():
    p6 = prom<V +>{
      str2expression = ldf str2expression;
      p5 = prom<V +>{
        x5 = ld x;
        x6 = force? x5;
        checkMissing(x6);
        return x6;
      };
      r21 = dyn str2expression(p5);
      return r21;
    };
    r23 = dyn eval1(p6);
    check L28() else D11();
  L29():
    out = ld out;
    check L31() else D12();
  L30():
    r24 = dyn base1(<sym out>, "person");
    goto L4(r24);
  D5():
    deopt 14 [r8];
  D11():
    deopt 33 [r23];
  D12():
    deopt 37 [out];
  L5():
    goto L6();
  L6():
    out2 = ld out;
    check L37() else D16();
  L12(c7, dx1):
    r7 = `!`(dx1);
    c8 = `as.logical`(r7);
    c9 = `&&`(c7, c8);
    goto L0(c9);
  L13():
    dr = tryDispatchBuiltin.1("$", r3);
    dc = getTryDispatchBuiltinDispatched(dr);
    if dc then L15() else L14(c, dr);
  L14(c5, r5):
    r6 = `$`(r5, <sym `UTF-8`>);
    goto L12(c5, r6);
  L19():
    st con = r8;
    sym = ldf `on.exit`;
    base = ldf `on.exit` in base;
    guard = `==`.4(sym, base);
    if guard then L20() else L21();
  L28():
    goto L3(r23);
  L31():
    out1 = force? out;
    checkMissing(out1);
    inherits = ldf inherits in base;
    r26 = dyn inherits(out1, "person", FALSE);
    check L32() else D13();
  L33():
    do_call = ldf `do.call`;
    check L34() else D14();
  D13():
    deopt 42 [r26];
  D14():
    deopt 45 [];
  D16():
    deopt 52 [out2];
  L2():
    writeLines = ldf writeLines;
    check L22() else D6();
  L15():
    dx = getTryDispatchBuiltinValue(dr);
    goto L12(c, dx);
  L20():
    on_exit = ldf `on.exit` in base;
    r11 = dyn on_exit(<lang close(con)>);
    goto L2();
  L21():
    r9 = dyn base(<lang close(con)>);
    goto L2();
  L32():
    goto L4(r26);
  L34():
    p7 = prom<V +>{
      c13 = ld c;
      c14 = force? c13;
      checkMissing(c14);
      return c14;
    };
    p10 = prom<V +>{
      lapply = ldf lapply;
      p8 = prom<V +>{
        x7 = ld x;
        x8 = force? x7;
        checkMissing(x8);
        return x8;
      };
      p9 = prom<V +>{
        as_person = ld `as.person`;
        as_person1 = force? as_person;
        checkMissing(as_person1);
        return as_person1;
      };
      r31 = dyn lapply(p8, p9);
      return r31;
    };
    r33 = dyn do_call(p7, p10);
    check L35() else D15();
  L37():
    out3 = force? out2;
    checkMissing(out3);
    popenv;
    return out3;
  D6():
    deopt 20 [];
  D15():
    deopt 48 [r33];
  L22():
    p1 = prom<V +>{
      x3 = ld x;
      x4 = force? x3;
      checkMissing(x4);
      return x4;
    };
    p2 = prom<V +>{
      con = ld con;
      con1 = force? con;
      checkMissing(con1);
      return con1;
    };
    r14 = dyn writeLines[, , useBytes](p1, p2, TRUE);
    check L23() else D7();
  L35():
    st out = r33;
    goto L6();
  D7():
    deopt 25 [r14];
  L23():
    eval = ldf eval;
    check L24() else D8();
  D8():
    deopt 27 [];
  L24():
    p4 = prom<V +>{
      parse = ldf parse;
      p3 = prom<V +>{
        con2 = ld con;
        con3 = force? con2;
        checkMissing(con3);
        return con3;
      };
      r16 = dyn parse[, encoding](p3, "UTF-8");
      return r16;
    };
    r18 = dyn eval(p4);
    check L25() else D9();
  D9():
    deopt 29 [r18];
  L25():
    goto L3(r18);
  }
}