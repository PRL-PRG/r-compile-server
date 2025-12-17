fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1296726190;
    st `.parse_code_file` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1296726190(file, encoding, `keep.source`) {
  (reg file:*, reg encoding:*, reg keep_source:*) -+> V { var file:*, var encoding:*, reg encoding_isMissing:L, reg encoding_orDefault:*, var `keep.source`:*, reg keep_source_isMissing:L, reg keep_source_orDefault:*, reg getOption:cls, reg r:V, reg p:p(V +), reg file_size:cls, reg file1:*, reg file2:V, reg p1:p(V +), reg r3:V, reg r4:V, reg c:L, reg suppressWarnings:cls, reg sym:cls, reg base:cls, reg guard:L, reg r7:V, reg r8:V, reg encoding1:*, reg encoding2:V, reg is_na:cls, reg r9:V, reg r10:V, reg c1:L, reg c3:V, reg encoding3:*, reg encoding4:V, reg r11:V, reg c4:L, reg c5:V, reg c7:L, reg c9:V, reg _notin_:cls, reg Sys_getlocale:cls, reg r12:V, reg p2:p(V +), reg sym1:cls, reg base1:cls, reg guard1:L, reg r14:V, reg r15:V, reg c10:cls, reg r16:V, reg p3:p(V +), reg r18:V, reg c11:L, reg c12:V, reg c14:L, reg iconv:cls, reg readLines:cls, reg file3:*, reg file4:V, reg p4:p(V +), reg r20:V, reg p5:p(V +), reg encoding5:*, reg encoding6:V, reg p6:p(V +), reg r23:V, reg parse:cls, reg lines:*, reg lines1:V, reg p7:p(V +), reg srcfile:cls, reg file5:*, reg file6:V, reg p8:p(V +), reg r26:V, reg p9:p(V +), reg keep_source1:*, reg keep_source2:V, reg p10:p(V +), reg r29:V, reg parse1:cls, reg file7:*, reg file8:V, reg p11:p(V +), reg keep_source3:*, reg keep_source4:V, reg p12:p(V +), reg r32:V, reg p13:p(V +), reg r34:V |
    mkenv;
    st file = file;
    encoding_isMissing = missing.0(encoding);
    if encoding_isMissing then L0(NA_LGL) else L0(encoding);
  L0(encoding_orDefault):
    st encoding = encoding_orDefault;
    keep_source_isMissing = missing.0(keep_source);
    if keep_source_isMissing then L1() else L2(keep_source);
  L1():
    p = prom<V +>{
      getOption = ldf getOption;
      r = dyn getOption("keep.source");
      return r;
    };
    goto L2(p);
  L2(keep_source_orDefault):
    st `keep.source` = keep_source_orDefault;
    file_size = ldf `file.size`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p1 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    r3 = dyn file_size(p1);
    check L6() else D1();
  D1():
    deopt 3 [r3];
  L6():
    r4 = `!`(r3);
    c = `as.logical`(r4);
    if c then L7() else L3();
  L3():
    suppressWarnings = ldf suppressWarnings;
    check L10() else D2();
  L7():
    popenv;
    return NULL;
  D2():
    deopt 11 [];
  L10():
    p13 = prom<V +>{
      sym = ldf `is.na`;
      base = ldf `is.na` in base;
      guard = `==`.4(sym, base);
      if guard then L4() else L5();
    L0(r8):
      r10 = `!`(r8);
      c1 = `as.logical`(r10);
      if c1 then L6() else L1(c1);
    L4():
      encoding1 = ld encoding;
      encoding2 = force? encoding1;
      checkMissing(encoding2);
      is_na = ldf `is.na` in base;
      r9 = dyn is_na(encoding2);
      goto L0(r9);
    L5():
      r7 = dyn base(<sym encoding>);
      goto L0(r7);
    L1(c3):
      c7 = `as.logical`(c3);
      if c7 then L8() else L2(c7);
    L6():
      encoding3 = ld encoding;
      encoding4 = force? encoding3;
      checkMissing(encoding4);
      r11 = `!=`(encoding4, "unknown");
      c4 = `as.logical`(r11);
      c5 = `&&`(c1, c4);
      goto L1(c5);
    L2(c9):
      c14 = `as.logical`(c9);
      if c14 then L10() else L3();
    L8():
      _notin_ = ldf `%notin%`;
      p2 = prom<V +>{
        Sys_getlocale = ldf `Sys.getlocale`;
        r12 = dyn Sys_getlocale("LC_CTYPE");
        return r12;
      };
      p3 = prom<V +>{
        sym1 = ldf c;
        base1 = ldf c in base;
        guard1 = `==`.4(sym1, base1);
        if guard1 then L1() else L2();
      L0(r15):
        return r15;
      L1():
        c10 = ldf c in base;
        r16 = dyn c10("C", "POSIX");
        goto L0(r16);
      L2():
        r14 = dyn base1("C", "POSIX");
        goto L0(r14);
      };
      r18 = dyn _notin_(p2, p3);
      c11 = `as.logical`(r18);
      c12 = `&&`(c7, c11);
      goto L2(c12);
    L3():
      parse1 = ldf parse;
      p11 = prom<V +>{
        file7 = ld file;
        file8 = force? file7;
        checkMissing(file8);
        return file8;
      };
      p12 = prom<V +>{
        keep_source3 = ld `keep.source`;
        keep_source4 = force? keep_source3;
        checkMissing(keep_source4);
        return keep_source4;
      };
      r32 = dyn parse1[, `keep.source`](p11, p12);
      return r32;
    L10():
      iconv = ldf iconv;
      p5 = prom<V +>{
        readLines = ldf readLines;
        p4 = prom<V +>{
          file3 = ld file;
          file4 = force? file3;
          checkMissing(file4);
          return file4;
        };
        r20 = dyn readLines[, warn](p4, FALSE);
        return r20;
      };
      p6 = prom<V +>{
        encoding5 = ld encoding;
        encoding6 = force? encoding5;
        checkMissing(encoding6);
        return encoding6;
      };
      r23 = dyn iconv[, from, to, sub](p5, p6, "", "byte");
      st lines = r23;
      parse = ldf parse;
      p7 = prom<V +>{
        lines = ld lines;
        lines1 = force? lines;
        checkMissing(lines1);
        return lines1;
      };
      p9 = prom<V +>{
        srcfile = ldf srcfile;
        p8 = prom<V +>{
          file5 = ld file;
          file6 = force? file5;
          checkMissing(file6);
          return file6;
        };
        r26 = dyn srcfile(p8);
        return r26;
      };
      p10 = prom<V +>{
        keep_source1 = ld `keep.source`;
        keep_source2 = force? keep_source1;
        checkMissing(keep_source2);
        return keep_source2;
      };
      r29 = dyn parse[text, srcfile, `keep.source`](p7, p9, p10);
      return r29;
    };
    r34 = dyn suppressWarnings(p13);
    check L11() else D3();
  D3():
    deopt 13 [r34];
  L11():
    popenv;
    return r34;
  }
}