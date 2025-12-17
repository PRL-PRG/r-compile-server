fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3260621730;
    st Rd2txt_NEWS_in_Rd = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3260621730(f, out, outputEncoding) {
  (reg f:*, reg out:*, reg outputEncoding:*) -+> V { var f:*, var out:*, reg out_isMissing:L, reg out_orDefault:*, var outputEncoding:*, reg outputEncoding_isMissing:L, reg outputEncoding_orDefault:*, reg endsWith:cls, reg f1:*, reg f2:V, reg p:p(V +), reg r1:V, reg c:L, reg readRDS:cls, reg f3:*, reg f4:V, reg p1:p(V +), reg r3:V, reg Rd2txt:cls, reg f5:*, reg f6:V, reg p2:p(V +), reg out1:*, reg out2:V, reg p3:p(V +), reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg c1:cls, reg r9:V, reg p4:p(V +), reg outputEncoding1:*, reg outputEncoding2:V, reg p5:p(V +), reg Rd2txt_NEWS_in_Rd_options:*, reg Rd2txt_NEWS_in_Rd_options1:V, reg p6:p(V +), reg file_path:cls, reg R_home:cls, reg r13:V, reg p7:p(V +), reg r15:V, reg p8:p(V +), reg r17:V |
    mkenv;
    st f = f;
    out_isMissing = missing.0(out);
    if out_isMissing then L0("") else L0(out);
  L0(out_orDefault):
    st out = out_orDefault;
    outputEncoding_isMissing = missing.0(outputEncoding);
    if outputEncoding_isMissing then L1("UTF-8") else L1(outputEncoding);
  L1(outputEncoding_orDefault):
    st outputEncoding = outputEncoding_orDefault;
    endsWith = ldf endsWith;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    p = prom<V +>{
      f1 = ld f;
      f2 = force? f1;
      checkMissing(f2);
      return f2;
    };
    r1 = dyn endsWith(p, ".rds");
    check L5() else D1();
  D1():
    deopt 4 [r1];
  L5():
    c = `as.logical`(r1);
    if c then L6() else L2();
  L2():
    goto L3();
  L3():
    Rd2txt = ldf Rd2txt;
    check L10() else D4();
  L6():
    readRDS = ldf readRDS;
    check L7() else D2();
  D2():
    deopt 6 [];
  D4():
    deopt 13 [];
  L7():
    p1 = prom<V +>{
      f3 = ld f;
      f4 = force? f3;
      checkMissing(f4);
      return f4;
    };
    r3 = dyn readRDS(p1);
    check L8() else D3();
  L10():
    p2 = prom<V +>{
      f5 = ld f;
      f6 = force? f5;
      checkMissing(f6);
      return f6;
    };
    p3 = prom<V +>{
      out1 = ld out;
      out2 = force? out1;
      checkMissing(out2);
      return out2;
    };
    p4 = prom<V +>{
      sym = ldf c;
      base = ldf c in base;
      guard = `==`.4(sym, base);
      if guard then L1() else L2();
    L0(r8):
      return r8;
    L1():
      c1 = ldf c in base;
      r9 = dyn c1("install", "render");
      goto L0(r9);
    L2():
      r7 = dyn base("install", "render");
      goto L0(r7);
    };
    p5 = prom<V +>{
      outputEncoding1 = ld outputEncoding;
      outputEncoding2 = force? outputEncoding1;
      checkMissing(outputEncoding2);
      return outputEncoding2;
    };
    p6 = prom<V +>{
      Rd2txt_NEWS_in_Rd_options = ld Rd2txt_NEWS_in_Rd_options;
      Rd2txt_NEWS_in_Rd_options1 = force? Rd2txt_NEWS_in_Rd_options;
      checkMissing(Rd2txt_NEWS_in_Rd_options1);
      return Rd2txt_NEWS_in_Rd_options1;
    };
    p8 = prom<V +>{
      file_path = ldf `file.path`;
      p7 = prom<V +>{
        R_home = ldf `R.home`;
        r13 = dyn R_home("share");
        return r13;
      };
      r15 = dyn file_path(p7, "Rd", "macros", "system.Rd");
      return r15;
    };
    r17 = dyn Rd2txt[, , stages, outputEncoding, options, macros](p2, p3, p4, p5, p6, p8);
    check L11() else D5();
  D3():
    deopt 8 [r3];
  D5():
    deopt 24 [r17];
  L8():
    st f = r3;
    goto L3();
  L11():
    popenv;
    return r17;
  }
}