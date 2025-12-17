fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2801403884;
    st `.makeMessage` = r;
    setInvisible.0();
    popenv;
    return r;
  }
}
fun inner2801403884(`...`, domain, appendLF) {
  (reg ddd:dots, reg domain:*, reg appendLF:*) -+> V { var `...`:dots?, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, var appendLF:*, reg appendLF_isMissing:L, reg appendLF_orDefault:*, reg sym:cls, reg base:cls, reg guard:L, reg r:V, reg r1:V, reg ___length:cls, reg r2:V, reg c:L, reg lapply:cls, reg sym1:cls, reg base1:cls, reg guard1:L, reg r3:V, reg r4:V, reg list:cls, reg ddd1:dots?, reg r5:V, reg p:p(V +), reg as_character:*, reg as_character1:V, reg p1:p(V +), reg r8:V, reg sym2:cls, reg base2:cls, reg guard2:L, reg r9:V, reg r10:V, reg domain1:*, reg domain2:V, reg c1:V, reg c2:L, reg c3:V, reg sym3:cls, reg base3:cls, reg guard3:L, reg r11:V, reg c7:L, reg r12:V, reg domain3:*, reg domain4:V, reg is_na:cls, reg r13:V, reg r14:V, reg c8:L, reg c9:V, reg c11:L, reg sym4:cls, reg base4:cls, reg guard4:L, reg r15:V, reg r16:V, reg domain5:*, reg domain6:V, reg unlist:cls, reg args:*, reg args1:V, reg p2:p(V +), reg r18:V, reg gettext:cls, reg r19:V, reg paste:cls, reg args2:*, reg args3:V, reg p3:p(V +), reg r22:V, reg r23:V, reg appendLF1:*, reg appendLF2:V, reg c12:L, reg paste1:cls, reg msg:*, reg msg1:V, reg p4:p(V +), reg r25:V, reg msg2:*, reg msg3:V |
    mkenv;
    st `...` = ddd;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L0(NULL) else L0(domain);
  L0(domain_orDefault):
    st domain = domain_orDefault;
    appendLF_isMissing = missing.0(appendLF);
    if appendLF_isMissing then L1(FALSE) else L1(appendLF);
  L1(appendLF_orDefault):
    st appendLF = appendLF_orDefault;
    sym = ldf `...length`;
    base = ldf `...length` in base;
    guard = `==`.4(sym, base);
    if guard then L12() else L13();
  L2(r1):
    c = `as.logical`(r1);
    if c then L15() else L3();
  L12():
    ___length = ldf `...length` in base;
    r2 = dyn ___length();
    check L14() else D0();
  L13():
    r = dyn base();
    goto L2(r);
  D0():
    deopt 3 [r2];
  L3():
    goto L10("");
  L10(r23):
    st msg = r23;
    appendLF1 = ld appendLF;
    check L38() else D12();
  L14():
    goto L2(r2);
  L15():
    lapply = ldf lapply;
    check L16() else D1();
  D1():
    deopt 5 [];
  D12():
    deopt 45 [appendLF1];
  L16():
    p = prom<V +>{
      sym1 = ldf list;
      base1 = ldf list in base;
      guard1 = `==`.4(sym1, base1);
      if guard1 then L1() else L2();
    L0(r4):
      return r4;
    L1():
      list = ldf list;
      ddd1 = ld `...`;
      r5 = dyn list[`...`](ddd1);
      goto L0(r5);
    L2():
      r3 = dyn base1(<sym ...>);
      goto L0(r3);
    };
    p1 = prom<V +>{
      as_character = ld `as.character`;
      as_character1 = force? as_character;
      checkMissing(as_character1);
      return as_character1;
    };
    r8 = dyn lapply(p, p1);
    check L17() else D2();
  L38():
    appendLF2 = force? appendLF1;
    checkMissing(appendLF2);
    c12 = `as.logical`(appendLF2);
    if c12 then L39() else L11();
  D2():
    deopt 8 [r8];
  L11():
    msg2 = ld msg;
    check L43() else D15();
  L17():
    st args = r8;
    sym2 = ldf `is.null`;
    base2 = ldf `is.null` in base;
    guard2 = `==`.4(sym2, base2);
    if guard2 then L18() else L19();
  L39():
    paste1 = ldf paste0;
    check L40() else D13();
  D13():
    deopt 48 [];
  D15():
    deopt 52 [msg2];
  L4(r10):
    c2 = `as.logical`(r10);
    if c2 then L5(c2) else L21();
  L18():
    domain1 = ld domain;
    check L20() else D3();
  L19():
    r9 = dyn base2(<sym domain>);
    goto L4(r9);
  L40():
    p4 = prom<V +>{
      msg = ld msg;
      msg1 = force? msg;
      checkMissing(msg1);
      return msg1;
    };
    r25 = dyn paste1(p4, "\n");
    check L41() else D14();
  L43():
    msg3 = force? msg2;
    checkMissing(msg3);
    popenv;
    return msg3;
  D3():
    deopt 11 [domain1];
  D14():
    deopt 51 [r25];
  L5(c3):
    c11 = `as.logical`(c3);
    if c11 then L27() else L7();
  L20():
    domain2 = force? domain1;
    checkMissing(domain2);
    c1 = `==`(domain2, NULL);
    goto L4(c1);
  L21():
    sym3 = ldf `is.na`;
    base3 = ldf `is.na` in base;
    guard3 = `==`.4(sym3, base3);
    if guard3 then L22() else L23();
  L41():
    popenv;
    return r25;
  L6(c7, r12):
    r14 = `!`(r12);
    c8 = `as.logical`(r14);
    c9 = `||`(c7, c8);
    goto L5(c9);
  L7():
    goto L9();
  L9():
    paste = ldf paste;
    check L35() else D10();
  L22():
    domain3 = ld domain;
    check L24() else D4();
  L23():
    r11 = dyn base3(<sym domain>);
    goto L6(c2, r11);
  L27():
    sym4 = ldf `.Internal`;
    base4 = ldf `.Internal` in base;
    guard4 = `==`.4(sym4, base4);
    if guard4 then L28() else L29();
  D4():
    deopt 16 [c2, domain3];
  D10():
    deopt 37 [];
  L8(r16):
    st args = r16;
    goto L9();
  L24():
    domain4 = force? domain3;
    checkMissing(domain4);
    is_na = ldf `is.na` in base;
    r13 = dyn is_na(domain4);
    check L25() else D5();
  L28():
    domain5 = ld domain;
    check L30() else D6();
  L29():
    r15 = dyn base4(<lang gettext(domain, unlist(args), TRUE)>);
    goto L8(r15);
  L35():
    p3 = prom<V +>{
      args2 = ld args;
      args3 = force? args2;
      checkMissing(args3);
      return args3;
    };
    r22 = dyn paste[, collapse](p3, "");
    check L36() else D11();
  D5():
    deopt 19 [c2, r13];
  D6():
    deopt 24 [domain5];
  D11():
    deopt 41 [r22];
  L25():
    goto L6(c2, r13);
  L30():
    domain6 = force? domain5;
    checkMissing(domain6);
    unlist = ldf unlist;
    check L31() else D7();
  L36():
    goto L10(r22);
  D7():
    deopt 27 [];
  L31():
    p2 = prom<V +>{
      args = ld args;
      args1 = force? args;
      checkMissing(args1);
      return args1;
    };
    r18 = dyn unlist(p2);
    check L32() else D8();
  D8():
    deopt 29 [r18];
  L32():
    gettext = ldf gettext in base;
    r19 = dyn gettext(domain6, r18, TRUE);
    check L33() else D9();
  D9():
    deopt 32 [r19];
  L33():
    goto L8(r19);
  }
}