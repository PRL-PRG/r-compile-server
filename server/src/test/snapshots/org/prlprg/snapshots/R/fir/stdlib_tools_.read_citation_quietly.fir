fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2843998100;
    st `.read_citation_quietly` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2843998100(cfile, meta) {
  (reg cfile:*, reg meta:*) -+> V { var cfile:*, var meta:*, reg tryCatch:cls, reg suppressMessages:cls, reg suppressWarnings:cls, reg __:cls, reg r:V, reg r1:cls, reg cfile1:*, reg cfile2:V, reg p:p(V +), reg meta1:*, reg meta2:V, reg p1:p(V +), reg r4:V, reg p2:p(V +), reg r6:V, reg p3:p(V +), reg r8:V, reg p4:p(V +), reg identity:*, reg identity1:V, reg p5:p(V +), reg r11:V |
    mkenv;
    st cfile = cfile;
    st meta = meta;
    tryCatch = ldf tryCatch;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    p4 = prom<V +>{
      suppressMessages = ldf suppressMessages;
      p3 = prom<V +>{
        suppressWarnings = ldf suppressWarnings;
        p2 = prom<V +>{
          __ = ldf `::`;
          r = dyn __("utils", "readCitationFile");
          checkFun.0(r);
          r1 = r as cls;
          p = prom<V +>{
            cfile1 = ld cfile;
            cfile2 = force? cfile1;
            checkMissing(cfile2);
            return cfile2;
          };
          p1 = prom<V +>{
            meta1 = ld meta;
            meta2 = force? meta1;
            checkMissing(meta2);
            return meta2;
          };
          r4 = dyn r1(p, p1);
          return r4;
        };
        r6 = dyn suppressWarnings(p2);
        return r6;
      };
      r8 = dyn suppressMessages(p3);
      return r8;
    };
    p5 = prom<V +>{
      identity = ld identity;
      identity1 = force? identity;
      checkMissing(identity1);
      return identity1;
    };
    r11 = dyn tryCatch[, error](p4, p5);
    check L1() else D1();
  D1():
    deopt 5 [r11];
  L1():
    popenv;
    return r11;
  }
}