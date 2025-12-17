fun main() {
  () -+> V { reg r:cls |
    mkenv;
    r = clos inner3828731956;
    st getDepList = r;
    invisible.0();
    popenv;
    return r;
  }
}
fun inner3828731956(depMtrx, instPkgs, recursive, local, reduce, `lib.loc`) {
  (reg depMtrx:*, reg instPkgs:*, reg recursive:*, reg local:*, reg reduce:*, reg lib_loc:*) -+> V { var depMtrx:*, var instPkgs:*, var recursive:*, reg recursive_isMissing:L, reg recursive_orDefault:*, var local:*, reg local_isMissing:L, reg local_orDefault:*, var reduce:*, reg reduce_isMissing:L, reg reduce_orDefault:*, var `lib.loc`:*, reg lib_loc_isMissing:L, reg lib_loc_orDefault:*, reg _Defunct:cls, reg r:V |
    mkenv;
    st depMtrx = depMtrx;
    st instPkgs = instPkgs;
    recursive_isMissing = missing.0(recursive);
    if recursive_isMissing then L0(TRUE) else L0(recursive);
  L0(recursive_orDefault):
    st recursive = recursive_orDefault;
    local_isMissing = missing.0(local);
    if local_isMissing then L1(TRUE) else L1(local);
  L1(local_orDefault):
    st local = local_orDefault;
    reduce_isMissing = missing.0(reduce);
    if reduce_isMissing then L2(TRUE) else L2(reduce);
  L2(reduce_orDefault):
    st reduce = reduce_orDefault;
    lib_loc_isMissing = missing.0(lib_loc);
    if lib_loc_isMissing then L3(NULL) else L3(lib_loc);
  L3(lib_loc_orDefault):
    st `lib.loc` = lib_loc_orDefault;
    _Defunct = ldf `.Defunct`;
    check L4() else D0();
  D0():
    deopt 1 [];
  L4():
    r = dyn _Defunct("dependsOnPkgs() or package_dependencies()");
    check L5() else D1();
  D1():
    deopt 3 [r];
  L5():
    popenv;
    return r;
  }
}