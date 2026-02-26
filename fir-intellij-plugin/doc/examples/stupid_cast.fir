fun main() {
  # We explicitly *allow* stupid casts, because when FIŘ improves types it can create them.
  () --> I { reg r0:v(I)o, reg r1:I |
    r0 = v(I)[1, 2, 3];
    # runtime-error: Type mismatch in cast: <int 1, 2, 3> {:v(I)} isn't a(n) I
    r1 = r0 as I;
    return r1;
  }
}
