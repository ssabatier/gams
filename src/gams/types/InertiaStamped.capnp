# Generated by ./generate_schemas.py. This file should not be modified by hand.
@0xd9716568d2789c20;

# Namespace setup
using Cxx = import "/capnp/c++.capnp";
$Cxx.namespace("gams::types");

# Capnfile Imports
using import "Inertia.capnp".Inertia;
using import "Header.capnp".Header;

# Type definition
struct InertiaStamped {
   header @0: Header;
   inertia @1: Inertia;
   
}
