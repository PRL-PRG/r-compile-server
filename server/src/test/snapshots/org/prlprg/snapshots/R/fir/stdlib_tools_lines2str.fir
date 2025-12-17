fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3559916223;
    st lines2str = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3559916223(txt, sep) {
  (reg txt:*, reg sep:*) -+> V { var txt:*, var sep:*, reg sep_isMissing:L, reg sep_orDefault:*, reg gsub:cls, reg sep1:*, reg sep2:V, reg p:p(V +), reg paste:cls, reg txt1:*, reg txt2:V, reg p1:p(V +), reg sep3:*, reg sep4:V, reg p2:p(V +), reg r3:V, reg p3:p(V +), reg r5:V, reg trimws:cls, reg iconv:cls, reg bytes:*, reg bytes1:V, reg p4:p(V +), reg r7:V, reg p5:p(V +), reg r9:V |
    mkenv;
    st txt = txt;
    sep_isMissing = missing.0(sep);
    if sep_isMissing then L0("") else L0(sep);
  L0(sep_orDefault):
    st sep = sep_orDefault;
    gsub = ldf gsub;
    check L1() else D0();
  D0():
    deopt 1 [];
  L1():
    p = prom<V +>{
      sep1 = ld sep;
      sep2 = force? sep1;
      checkMissing(sep2);
      return sep2;
    };
    p3 = prom<V +>{
      paste = ldf paste;
      p1 = prom<V +>{
        txt1 = ld txt;
        txt2 = force? txt1;
        checkMissing(txt2);
        return txt2;
      };
      p2 = prom<V +>{
        sep3 = ld sep;
        sep4 = force? sep3;
        checkMissing(sep4);
        return sep4;
      };
      r3 = dyn paste[, collapse](p1, p2);
      return r3;
    };
    r5 = dyn gsub[, , , fixed, useBytes]("\n", p, p3, TRUE, TRUE);
    check L2() else D1();
  D1():
    deopt 9 [r5];
  L2():
    st bytes = r5;
    trimws = ldf trimws;
    check L3() else D2();
  D2():
    deopt 12 [];
  L3():
    p5 = prom<V +>{
      iconv = ldf iconv;
      p4 = prom<V +>{
        bytes = ld bytes;
        bytes1 = force? bytes;
        checkMissing(bytes1);
        return bytes1;
      };
      r7 = dyn iconv[, to, sub](p4, "UTF-8", "byte");
      return r7;
    };
    r9 = dyn trimws(p5);
    check L4() else D3();
  D3():
    deopt 14 [r9];
  L4():
    popenv;
    return r9;
  }
}