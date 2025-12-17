fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3109905590;
    st checkPoFiles = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3109905590(language, dir) {
  (reg language:*, reg dir:*) -+> V { var language:*, var dir:*, reg dir_isMissing:L, reg dir_orDefault:*, reg list_files:cls, reg dir1:*, reg dir2:V, reg p:p(V +), reg paste0:cls, reg language1:*, reg language2:V, reg p1:p(V +), reg r2:V, reg p2:p(V +), reg r4:V, reg matrix:cls, reg character:cls, reg r5:V, reg p3:p(V +), reg r7:V, reg files:*, reg files1:V, reg s:V, reg l:I, reg i:I, reg i1:I, reg i2:I, reg c:L, reg x:V, reg checkPoFile:cls, reg f:*, reg f1:V, reg p4:p(V +), reg startsWith:cls, reg basename:cls, reg f2:*, reg f3:V, reg p5:p(V +), reg r10:V, reg p6:p(V +), reg r12:V, reg p7:p(V +), reg r14:V, reg nrow:cls, reg errs:*, reg errs1:V, reg p8:p(V +), reg r16:V, reg c1:L, reg rbind:cls, reg result:*, reg result1:V, reg p9:p(V +), reg errs2:*, reg errs3:V, reg p10:p(V +), reg r19:V, reg i7:I, reg structure:cls, reg result2:*, reg result3:V, reg p11:p(V +), reg r22:V |
    mkenv;
    st language = language;
    dir_isMissing = missing.0(dir);
    if dir_isMissing then L0(".") else L0(dir);
  L0(dir_orDefault):
    st dir = dir_orDefault;
    list_files = ldf `list.files`;
    check L5() else D0();
  D0():
    deopt 1 [];
  L5():
    p = prom<V +>{
      dir1 = ld dir;
      dir2 = force? dir1;
      checkMissing(dir2);
      return dir2;
    };
    p2 = prom<V +>{
      paste0 = ldf paste0;
      p1 = prom<V +>{
        language1 = ld language;
        language2 = force? language1;
        checkMissing(language2);
        return language2;
      };
      r2 = dyn paste0(p1, "[.]po$");
      return r2;
    };
    r4 = dyn list_files[path, pattern, `full.names`, recursive](p, p2, TRUE, TRUE);
    check L6() else D1();
  D1():
    deopt 10 [r4];
  L6():
    st files = r4;
    matrix = ldf matrix;
    check L7() else D2();
  D2():
    deopt 13 [];
  L7():
    p3 = prom<V +>{
      character = ldf character;
      r5 = dyn character();
      return r5;
    };
    r7 = dyn matrix[, ncol, nrow](p3, 5, 0);
    check L8() else D3();
  D3():
    deopt 19 [r7];
  L8():
    st result = r7;
    files = ld files;
    check L9() else D4();
  D4():
    deopt 21 [files];
  L9():
    files1 = force? files;
    checkMissing(files1);
    s = toForSeq(files1);
    l = length(s);
    i = 0;
    goto L1(i);
  L1(i1):
    i2 = `+`.1(i1, 1);
    c = `<`.1(l, i2);
    if c then L10() else L4();
  L4():
    x = `[[`(s, i2, NULL, TRUE);
    st f = x;
    checkPoFile = ldf checkPoFile;
    check L11() else D5();
  L10():
    structure = ldf structure;
    check L19() else D11();
  D5():
    deopt 24 [i2];
  D11():
    deopt 46 [];
  L11():
    p4 = prom<V +>{
      f = ld f;
      f1 = force? f;
      checkMissing(f1);
      return f1;
    };
    p7 = prom<V +>{
      startsWith = ldf startsWith;
      p6 = prom<V +>{
        basename = ldf basename;
        p5 = prom<V +>{
          f2 = ld f;
          f3 = force? f2;
          checkMissing(f3);
          return f3;
        };
        r10 = dyn basename(p5);
        return r10;
      };
      r12 = dyn startsWith(p6, "R-");
      return r12;
    };
    r14 = dyn checkPoFile[, strictPlural](p4, p7);
    check L12() else D6();
  L19():
    p11 = prom<V +>{
      result2 = ld result;
      result3 = force? result2;
      checkMissing(result3);
      return result3;
    };
    r22 = dyn structure[, class](p11, "check_po_files");
    check L20() else D12();
  D6():
    deopt 28 [i2, r14];
  D12():
    deopt 50 [r22];
  L12():
    st errs = r14;
    nrow = ldf nrow;
    check L13() else D7();
  L20():
    popenv;
    return r22;
  D7():
    deopt 31 [i2];
  L13():
    p8 = prom<V +>{
      errs = ld errs;
      errs1 = force? errs;
      checkMissing(errs1);
      return errs1;
    };
    r16 = dyn nrow(p8);
    check L14() else D8();
  D8():
    deopt 33 [i2, r16];
  L14():
    c1 = `as.logical`(r16);
    if c1 then L15() else L2();
  L2():
    goto L3(i2);
  L3(i7):
    goto L1(i7);
  L15():
    rbind = ldf rbind;
    check L16() else D9();
  D9():
    deopt 35 [i2];
  L16():
    p9 = prom<V +>{
      result = ld result;
      result1 = force? result;
      checkMissing(result1);
      return result1;
    };
    p10 = prom<V +>{
      errs2 = ld errs;
      errs3 = force? errs2;
      checkMissing(errs3);
      return errs3;
    };
    r19 = dyn rbind(p9, p10);
    check L17() else D10();
  D10():
    deopt 38 [i2, r19];
  L17():
    st result = r19;
    goto L3(i2);
  }
}