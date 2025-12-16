fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-680747806`;
    st packageStartupMessage = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-680747806`(`...`, domain, appendLF) {
  (reg ddd:dots, reg domain:*, reg appendLF:*) -+> V { var `...`:dots?, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, var appendLF:*, reg appendLF_isMissing:L, reg appendLF_orDefault:*, reg sys_call:cls, reg r:V, reg _makeMessage:cls, reg ddd1:dots?, reg domain1:*, reg domain2:V, reg p:p(V +), reg appendLF1:*, reg appendLF2:V, reg p1:p(V +), reg r3:V, reg message:cls, reg _packageStartupMessage:cls, reg msg:*, reg msg1:V, reg p2:p(V +), reg call:*, reg call1:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V |
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
    sys_call = ldf `sys.call`;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    r = dyn sys_call();
    check L3() else D1();
  D1():
    deopt 2 [r];
  L3():
    st call = r;
    _makeMessage = ldf `.makeMessage`;
    check L4() else D2();
  D2():
    deopt 5 [];
  L4():
    ddd1 = ld `...`;
    p = prom<V +>{
      domain1 = ld domain;
      domain2 = force? domain1;
      checkMissing(domain2);
      return domain2;
    };
    p1 = prom<V +>{
      appendLF1 = ld appendLF;
      appendLF2 = force? appendLF1;
      checkMissing(appendLF2);
      return appendLF2;
    };
    r3 = dyn _makeMessage[`...`, domain, appendLF](ddd1, p, p1);
    check L5() else D3();
  D3():
    deopt 11 [r3];
  L5():
    st msg = r3;
    message = ldf message;
    check L6() else D4();
  D4():
    deopt 14 [];
  L6():
    p4 = prom<V +>{
      _packageStartupMessage = ldf `.packageStartupMessage`;
      p2 = prom<V +>{
        msg = ld msg;
        msg1 = force? msg;
        checkMissing(msg1);
        return msg1;
      };
      p3 = prom<V +>{
        call = ld call;
        call1 = force? call;
        checkMissing(call1);
        return call1;
      };
      r6 = dyn _packageStartupMessage(p2, p3);
      return r6;
    };
    r8 = dyn message(p4);
    check L7() else D5();
  D5():
    deopt 16 [r8];
  L7():
    popenv;
    return r8;
  }
}