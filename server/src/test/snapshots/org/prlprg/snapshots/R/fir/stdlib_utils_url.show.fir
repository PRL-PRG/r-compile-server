fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner1599368878;
    st `url.show` = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner1599368878(url, title, file, `delete.file`, method, `...`) {
  (reg url:*, reg title:*, reg file:*, reg delete_file:*, reg method:*, reg ddd:dots) -+> V { var url:*, var title:*, reg title_isMissing:L, reg title_orDefault:*, reg url1:*, reg url2:V, reg p:p(V +), var file:*, reg file_isMissing:L, reg file_orDefault:*, reg tempfile:cls, reg r1:V, reg p1:p(V +), var `delete.file`:*, reg delete_file_isMissing:L, reg delete_file_orDefault:*, var method:*, var `...`:dots?, reg download_file:cls, reg url3:*, reg url4:V, reg p2:p(V +), reg file1:*, reg file2:V, reg p3:p(V +), reg method1:*, reg method2:V, reg p4:p(V +), reg r6:V, reg c:L, reg stop:cls, reg r7:V, reg file_show:cls, reg file3:*, reg file4:V, reg p5:p(V +), reg delete_file1:*, reg delete_file2:V, reg p6:p(V +), reg title1:*, reg title2:V, reg p7:p(V +), reg ddd1:dots?, reg r12:V |
    mkenv;
    st url = url;
    title_isMissing = missing.0(title);
    if title_isMissing then L0() else L1(title);
  L0():
    p = prom<V +>{
      url1 = ld url;
      url2 = force? url1;
      checkMissing(url2);
      return url2;
    };
    goto L1(p);
  L1(title_orDefault):
    st title = title_orDefault;
    file_isMissing = missing.0(file);
    if file_isMissing then L2() else L3(file);
  L2():
    p1 = prom<V +>{
      tempfile = ldf tempfile;
      r1 = dyn tempfile();
      return r1;
    };
    goto L3(p1);
  L3(file_orDefault):
    st file = file_orDefault;
    delete_file_isMissing = missing.0(delete_file);
    if delete_file_isMissing then L4(TRUE) else L4(delete_file);
  L4(delete_file_orDefault):
    st `delete.file` = delete_file_orDefault;
    st method = method;
    st `...` = ddd;
    download_file = ldf `download.file`;
    check L7() else D0();
  D0():
    deopt 1 [];
  L7():
    p2 = prom<V +>{
      url3 = ld url;
      url4 = force? url3;
      checkMissing(url4);
      return url4;
    };
    p3 = prom<V +>{
      file1 = ld file;
      file2 = force? file1;
      checkMissing(file2);
      return file2;
    };
    p4 = prom<V +>{
      method1 = ld method;
      method2 = force? method1;
      checkMissing(method2);
      return method2;
    };
    r6 = dyn download_file[, destfile, method, mode](p2, p3, p4, "w");
    check L8() else D1();
  D1():
    deopt 9 [r6];
  L8():
    c = `as.logical`(r6);
    if c then L9() else L5();
  L5():
    goto L6();
  L6():
    file_show = ldf `file.show`;
    check L13() else D4();
  L9():
    stop = ldf stop;
    check L10() else D2();
  D2():
    deopt 11 [];
  D4():
    deopt 17 [];
  L10():
    r7 = dyn stop("transfer failure");
    check L11() else D3();
  L13():
    p5 = prom<V +>{
      file3 = ld file;
      file4 = force? file3;
      checkMissing(file4);
      return file4;
    };
    p6 = prom<V +>{
      delete_file1 = ld `delete.file`;
      delete_file2 = force? delete_file1;
      checkMissing(delete_file2);
      return delete_file2;
    };
    p7 = prom<V +>{
      title1 = ld title;
      title2 = force? title1;
      checkMissing(title2);
      return title2;
    };
    ddd1 = ld `...`;
    r12 = dyn file_show[, `delete.file`, title, `...`](p5, p6, p7, ddd1);
    check L14() else D5();
  D3():
    deopt 13 [r7];
  D5():
    deopt 24 [r12];
  L11():
    goto L6();
  L14():
    popenv;
    return r12;
  }
}