fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner516802322;
    st `.pandoc_md_for_CRAN` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner516802322(ifile, ofile) {
  (reg ifile:*, reg ofile:*) -+> V { var ifile:*, var ofile:*, reg _system_with_capture:cls, reg paste:cls, reg shQuote:cls, reg normalizePath:cls, reg ifile1:*, reg ifile2:V, reg p:p(V +), reg r1:V, reg p1:p(V +), reg r3:V, reg p2:p(V +), reg shQuote1:cls, reg ofile1:*, reg ofile2:V, reg p3:p(V +), reg r6:V, reg p4:p(V +), reg r8:V, reg p5:p(V +), reg r10:V |
    mkenv;
    st ifile = ifile;
    st ofile = ofile;
    _system_with_capture = ldf `.system_with_capture`;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p5 = prom<V +>{
      paste = ldf paste;
      p2 = prom<V +>{
        shQuote = ldf shQuote;
        p1 = prom<V +>{
          normalizePath = ldf normalizePath;
          p = prom<V +>{
            ifile1 = ld ifile;
            ifile2 = force? ifile1;
            checkMissing(ifile2);
            return ifile2;
          };
          r1 = dyn normalizePath(p);
          return r1;
        };
        r3 = dyn shQuote(p1);
        return r3;
      };
      p4 = prom<V +>{
        shQuote1 = ldf shQuote;
        p3 = prom<V +>{
          ofile1 = ld ofile;
          ofile2 = force? ofile1;
          checkMissing(ofile2);
          return ofile2;
        };
        r6 = dyn shQuote1(p3);
        return r6;
      };
      r8 = dyn paste(p2, "-s", "--mathjax", "--email-obfuscation=references", "-o", p4);
      return r8;
    };
    r10 = dyn _system_with_capture("pandoc", p5);
    check L1() else D1();
  D1():
    deopt 4 [r10];
  L1():
    popenv;
    return r10;
  }
}