fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner2708337952;
    st contributors = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner2708337952() {
  () -+> V { reg tempfile:cls, reg r:V, reg file:cls, reg outFile:*, reg outFile1:V, reg p:p(V +), reg r2:V, reg writeLines:cls, reg paste0:cls, reg r3:V, reg p1:p(V +), reg outConn:*, reg outConn1:V, reg p2:p(V +), reg r6:V, reg writeLines1:cls, reg readLines:cls, reg file_path:cls, reg R_home:cls, reg r7:V, reg p3:p(V +), reg r9:V, reg p4:p(V +), reg r11:V, reg p5:p(V +), reg outConn2:*, reg outConn3:V, reg p6:p(V +), reg r14:V, reg writeLines2:cls, reg outConn4:*, reg outConn5:V, reg p7:p(V +), reg r16:V, reg writeLines3:cls, reg readLines1:cls, reg file_path1:cls, reg R_home1:cls, reg r17:V, reg p8:p(V +), reg r19:V, reg p9:p(V +), reg r21:V, reg p10:p(V +), reg outConn6:*, reg outConn7:V, reg p11:p(V +), reg r24:V, reg close:cls, reg outConn8:*, reg outConn9:V, reg p12:p(V +), reg r26:V, reg file_show:cls, reg outFile2:*, reg outFile3:V, reg p13:p(V +), reg r28:V |
    mkenv;
    tempfile = ldf tempfile;
    check L0() else D0();
  D0():
    deopt 1 [];
  L0():
    r = dyn tempfile();
    check L1() else D1();
  D1():
    deopt 2 [r];
  L1():
    st outFile = r;
    file = ldf file;
    check L2() else D2();
  D2():
    deopt 5 [];
  L2():
    p = prom<V +>{
      outFile = ld outFile;
      outFile1 = force? outFile;
      checkMissing(outFile1);
      return outFile1;
    };
    r2 = dyn file[, open](p, "w");
    check L3() else D3();
  D3():
    deopt 9 [r2];
  L3():
    st outConn = r2;
    writeLines = ldf writeLines;
    check L4() else D4();
  D4():
    deopt 12 [];
  L4():
    p1 = prom<V +>{
      paste0 = ldf paste0;
      r3 = dyn paste0("R is a project which is attempting to provide a ", "modern piece of\nstatistical software for the ", "GNU suite of software.\n\n", "The current R is the result of a collaborative ", "effort with\ncontributions from all over the ", "world.\n\n");
      return r3;
    };
    p2 = prom<V +>{
      outConn = ld outConn;
      outConn1 = force? outConn;
      checkMissing(outConn1);
      return outConn1;
    };
    r6 = dyn writeLines(p1, p2);
    check L5() else D5();
  D5():
    deopt 15 [r6];
  L5():
    writeLines1 = ldf writeLines;
    check L6() else D6();
  D6():
    deopt 17 [];
  L6():
    p5 = prom<V +>{
      readLines = ldf readLines;
      p4 = prom<V +>{
        file_path = ldf `file.path`;
        p3 = prom<V +>{
          R_home = ldf `R.home`;
          r7 = dyn R_home("doc");
          return r7;
        };
        r9 = dyn file_path(p3, "AUTHORS");
        return r9;
      };
      r11 = dyn readLines(p4);
      return r11;
    };
    p6 = prom<V +>{
      outConn2 = ld outConn;
      outConn3 = force? outConn2;
      checkMissing(outConn3);
      return outConn3;
    };
    r14 = dyn writeLines1(p5, p6);
    check L7() else D7();
  D7():
    deopt 20 [r14];
  L7():
    writeLines2 = ldf writeLines;
    check L8() else D8();
  D8():
    deopt 22 [];
  L8():
    p7 = prom<V +>{
      outConn4 = ld outConn;
      outConn5 = force? outConn4;
      checkMissing(outConn5);
      return outConn5;
    };
    r16 = dyn writeLines2("", p7);
    check L9() else D9();
  D9():
    deopt 25 [r16];
  L9():
    writeLines3 = ldf writeLines;
    check L10() else D10();
  D10():
    deopt 27 [];
  L10():
    p10 = prom<V +>{
      readLines1 = ldf readLines;
      p9 = prom<V +>{
        file_path1 = ldf `file.path`;
        p8 = prom<V +>{
          R_home1 = ldf `R.home`;
          r17 = dyn R_home1("doc");
          return r17;
        };
        r19 = dyn file_path1(p8, "THANKS");
        return r19;
      };
      r21 = dyn readLines1(p9);
      return r21;
    };
    p11 = prom<V +>{
      outConn6 = ld outConn;
      outConn7 = force? outConn6;
      checkMissing(outConn7);
      return outConn7;
    };
    r24 = dyn writeLines3(p10, p11);
    check L11() else D11();
  D11():
    deopt 30 [r24];
  L11():
    close = ldf close;
    check L12() else D12();
  D12():
    deopt 32 [];
  L12():
    p12 = prom<V +>{
      outConn8 = ld outConn;
      outConn9 = force? outConn8;
      checkMissing(outConn9);
      return outConn9;
    };
    r26 = dyn close(p12);
    check L13() else D13();
  D13():
    deopt 34 [r26];
  L13():
    file_show = ldf `file.show`;
    check L14() else D14();
  D14():
    deopt 36 [];
  L14():
    p13 = prom<V +>{
      outFile2 = ld outFile;
      outFile3 = force? outFile2;
      checkMissing(outFile3);
      return outFile3;
    };
    r28 = dyn file_show[, `delete.file`](p13, TRUE);
    check L15() else D15();
  D15():
    deopt 40 [r28];
  L15():
    popenv;
    return r28;
  }
}