fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos `inner-705752425`;
    st gettextf = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun `inner-705752425`(fmt, `...`, domain, trim) {
  (reg fmt:*, reg ddd:dots, reg domain:*, reg trim:*) -+> V { var fmt:*, var `...`:dots?, var domain:*, reg domain_isMissing:L, reg domain_orDefault:*, var trim:*, reg trim_isMissing:L, reg trim_orDefault:*, reg sprintf:cls, reg gettext:cls, reg fmt1:*, reg fmt2:V, reg p:p(V +), reg domain1:*, reg domain2:V, reg p1:p(V +), reg trim1:*, reg trim2:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg ddd1:dots?, reg r5:V |
    mkenv;
    st fmt = fmt;
    st `...` = ddd;
    domain_isMissing = missing.0(domain);
    if domain_isMissing then L0(NULL) else L0(domain);
  L0(domain_orDefault):
    st domain = domain_orDefault;
    trim_isMissing = missing.0(trim);
    if trim_isMissing then L1(TRUE) else L1(trim);
  L1(trim_orDefault):
    st trim = trim_orDefault;
    sprintf = ldf sprintf;
    check L2() else D0();
  D0():
    deopt 1 [];
  L2():
    p3 = prom<V +>{
      gettext = ldf gettext;
      p = prom<V +>{
        fmt1 = ld fmt;
        fmt2 = force? fmt1;
        checkMissing(fmt2);
        return fmt2;
      };
      p1 = prom<V +>{
        domain1 = ld domain;
        domain2 = force? domain1;
        checkMissing(domain2);
        return domain2;
      };
      p2 = prom<V +>{
        trim1 = ld trim;
        trim2 = force? trim1;
        checkMissing(trim2);
        return trim2;
      };
      r3 = dyn gettext[, domain, trim](p, p1, p2);
      return r3;
    };
    ddd1 = ld `...`;
    r5 = dyn sprintf[, `...`](p3, ddd1);
    check L3() else D1();
  D1():
    deopt 4 [r5];
  L3():
    popenv;
    return r5;
  }
}