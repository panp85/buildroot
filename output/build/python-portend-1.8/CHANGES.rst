1.8
===

Remove dependency on ``jaraco.compat`` and instead just
copy and reference the ``total_seconds`` compatibility
function for Python 2.6.

1.7.1
=====

* 2: Use tempora, replacing deprecated jaraco.timing.

1.7
===

Expose the port check functionality as ``portend.Checker`` class.

1.6.1
=====

Correct failures on Python 2.6 where
``datetime.datetime.total_seconds``
and argparse are unavailable.

1.6
===

Add support for Python 2.6 (to support CherryPy).

1.5
===

Automatically deploy tagged versions via Travis-CI.

1.4
===

Moved hosting to Github.

1.3
===

Added ``find_available_local_port`` for identifying a local port
available for binding.

1.2
===

Only require ``pytest-runner`` when pytest is invoked.

1.1
===

Renamed functions:

 - wait_for_occupied_port: occupied
 - wait_for_free_port: free

The original names are kept as aliases for now.

Added execution support for the portend module. Invoke with
``python -m portend``.

1.0
===

Initial release based on utilities in CherryPy 3.5.
