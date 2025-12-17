fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1466735841;
    st `.message` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1466735841(`...`, domain, appendLF) {
  (reg ddd:dots, reg domain:*, reg appendLF:*) -+> V { var `...`:dots?, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, var appendLF:*, reg appendLF_isMissing:L, reg appendLF_orDefault:*, reg paste0:cls, reg ddd1:dots?, reg r:V, reg strwrap:cls, reg text:*, reg text1:V, reg p:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r2:V, reg r3:V, reg getOption:cls, reg r4:V, reg ___:cls, reg r5:V, reg r6:V, reg max:cls, reg r7:V, reg p1:p(V +), reg r9:V, reg message:cls, reg paste1:cls, reg lines:*, reg lines1:V, reg p2:p(V +), reg r11:V, reg p3:p(V +), reg domain1:*, reg domain2:V, reg p4:p(V +), reg appendLF1:*, reg appendLF2:V, reg p5:p(V +), reg r15:V |
    mkenv;
    st `...` = ddd;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L0(NULL) else L0(domain);
  L0(domain_orDefault):
    st domain = domain_orDefault;
    appendLF_isMissing = missing.0(appendLF);
    if appendLF_isMissing then L1(TRUE) else L1(appendLF);
  L1(appendLF_orDefault):
    st appendLF = appendLF_orDefault;
    paste0 = ldf paste0;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    ddd1 = ld `...`;
    r = dyn paste0[`...`, collapse](ddd1, "");
    check L3() else D1();
  D1():
    deopt 5 [r];
  L3():
    st text = r;
    strwrap = ldf strwrap;
    check L4() else D2();
  D2():
    deopt 8 [];
  L4():
    p = prom<V +>{
      text = ld text;
      text1 = force? text;
      checkMissing(text1);
      return text1;
    };
    p1 = prom<V +>{
      sym = ldf max;
      base = ldf max in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r3):
      return r3;
    L1():
      getOption = ldf getOption;
      r4 = dyn getOption("width");
      ___ = ldf `%/%` in base;
      r5 = dyn ___(r4, 8.0);
      r6 = `*`(7.0, r5);
      max = ldf max in base;
      r7 = dyn max(20.0, r6);
      goto L0(r7);
    L2():
      r2 = dyn base(20.0, <lang `*`(7.0, `%/%`(getOption("width"), 8.0))>);
      goto L0(r2);
    };
    r9 = dyn strwrap[, width](p, p1);
    check L5() else D3();
  D3():
    deopt 12 [r9];
  L5():
    st lines = r9;
    message = ldf message;
    check L6() else D4();
  D4():
    deopt 15 [];
  L6():
    p3 = prom<V +>{
      paste1 = ldf paste;
      p2 = prom<V +>{
        lines = ld lines;
        lines1 = force? lines;
        checkMissing(lines1);
        return lines1;
      };
      r11 = dyn paste1[, collapse](p2, "\n");
      return r11;
    };
    p4 = prom<V +>{
      domain1 = ld domain;
      domain2 = force? domain1;
      checkMissing(domain2);
      return domain2;
    };
    p5 = prom<V +>{
      appendLF1 = ld appendLF;
      appendLF2 = force? appendLF1;
      checkMissing(appendLF2);
      return appendLF2;
    };
    r15 = dyn message[, domain, appendLF](p3, p4, p5);
    check L7() else D5();
  D5():
    deopt 21 [r15];
  L7():
    popenv;
    return r15;
  }
}